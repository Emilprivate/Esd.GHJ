#include "hook.h"

bool Detour32(BYTE* src, BYTE* dst, const uintptr_t len)
{
	if (len < 5) return false;
	
	DWORD curProtection;
	VirtualProtect(src, len, PAGE_EXECUTE_READWRITE, &curProtection);

	uintptr_t relativeAddress = dst - src - 5;
	
	*src = 0xE9;
	
	*(uintptr_t*)(src + 1) = relativeAddress;

	VirtualProtect(src, len, curProtection, &curProtection);
	
	return true;
}

BYTE* TrampHook32(BYTE* src, BYTE* dst, const uintptr_t len)
{
	if (len < 5) return 0;

	//Create Gateway
	BYTE* gateway = (BYTE*)VirtualAlloc(0, len, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

	//Write the stolen bytes to the gateway
	memcpy_s(gateway, len, src, len);

	//Get the gateway to destination address
	uintptr_t gatewayRelativeAddr = src - gateway - 5;

	//Add the jmp opcode to the end of the gateway
	*(gateway + len) = 0xE9;

	//Write the address of the gateway to the jmp
	*(uintptr_t*)((uintptr_t)gateway + len + 1) = gatewayRelativeAddr;
	
	//Perform the detour
	Detour32(src, dst, len);

	return gateway;
}

Hook::Hook(BYTE* src, BYTE* dst, BYTE* ptrToGatewayFnPtr, uintptr_t len)
{
	this->src = src;
	this->dst = dst;
	this->ptrToGatewayFnPtr = ptrToGatewayFnPtr;
	this->len = len;
}

Hook::Hook(const char* exportName, const char* modName, BYTE* dst, BYTE* PtrToGatewayPtr, uintptr_t len)
{
	HMODULE hMod = GetModuleHandleA(modName);
	this->src = (BYTE*)GetProcAddress(hMod, exportName);
	this->dst = dst;
	this->ptrToGatewayFnPtr = PtrToGatewayPtr;
	this->len = len;
}


void Hook::Enable()
{
	memcpy(originalBytes, src, len);
	*(uintptr_t*)ptrToGatewayFnPtr = (uintptr_t)TrampHook32(src, dst, len);
	bStatus = true;
}

void Hook::Disable()
{
	memcpy(src, originalBytes, len);
	bStatus = false;
}

void Hook::Toggle()
{
	if (!bStatus) {
		Enable();
	}
	else {
		Disable();
	}
}