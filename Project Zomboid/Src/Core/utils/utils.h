std::ostringstream strCout;
std::streambuf* oldCoutStreamBuf = std::cout.rdbuf();
std::string logs;

HWND tmp_window = NULL;
BOOL CALLBACK EnumWindowsCallback(HWND handle, LPARAM lParam)
{
	DWORD wndProcId;
	GetWindowThreadProcessId(handle, &wndProcId);

	if (GetCurrentProcessId() != wndProcId)
		return TRUE;

	tmp_window = handle;
	return FALSE; 
}

HWND GetProcessWindow()
{
	tmp_window = NULL;
	EnumWindows(EnumWindowsCallback, NULL);
	return tmp_window;
}

int GetNumFromColumnName(const std::string& name) {
	auto startPos = name.find_first_of("0123456789");
	if (startPos != std::string::npos) {
		return std::stoi(name.substr(startPos));
	}
	return -1;
}

std::string OpenFileDialog()
{
	OPENFILENAME ofn;
	CHAR szFile[260] = { 0 };
	ZeroMemory(&ofn, sizeof(OPENFILENAME));
	ofn.lStructSize = sizeof(OPENFILENAME);
	ofn.hwndOwner = NULL;
	ofn.lpstrFile = szFile;
	ofn.nMaxFile = sizeof(szFile);
	ofn.lpstrFilter = "Text Files\0*.txt\0All Files\0*.*\0";
	ofn.nFilterIndex = 1;
	ofn.lpstrFileTitle = NULL;
	ofn.nMaxFileTitle = 0;
	ofn.lpstrInitialDir = NULL;
	ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST | OFN_NOCHANGEDIR | OFN_OVERWRITEPROMPT;

	if (GetSaveFileName(&ofn) == TRUE) {
		std::string filePath(ofn.lpstrFile);
		if (filePath.substr(filePath.find_last_of(".") + 1) != "txt") {
			filePath.append(".txt");
		}
		return filePath;
	}
	return "";
}



/*void RedirectConsoleOutput()
{
	AllocConsole();
	FILE* file;
	freopen_s(&file, "CONOUT$", "w", stdout);
}*/

void RedirectConsoleOutput()
{
	AllocConsole();
	std::cout.rdbuf(strCout.rdbuf());
}

void SetConsoleColor(WORD color)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
}

bool LoadTextureFromMemory(const unsigned char* image_data, int image_width, int image_height, GLuint* out_texture)
{
	GLuint image_texture;
	glGenTextures(1, &image_texture);
	glBindTexture(GL_TEXTURE_2D, image_texture);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);

#if defined(GL_UNPACK_ROW_LENGTH) && !defined(__EMSCRIPTEN__)
	glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
#endif
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, image_width, image_height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image_data);

	*out_texture = image_texture;

	return true;
}

bool LoadTextureFromFile(const char* filename, GLuint* out_texture, int* out_width, int* out_height)
{
	int image_width = 0;
	int image_height = 0;
	unsigned char* image_data = stbi_load(filename, &image_width, &image_height, NULL, 4);
	if (image_data == NULL)
	{
		printf("stbi_load failed: %s\n", stbi_failure_reason());
		return false;
	}


	GLuint image_texture;
	glGenTextures(1, &image_texture);
	if (image_texture == 0)
	{
		printf("glGenTextures failed\n");
		return false;
	}

	glBindTexture(GL_TEXTURE_2D, image_texture);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);

#if defined(GL_UNPACK_ROW_LENGTH) && !defined(__EMSCRIPTEN__)
	glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
#endif
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, image_width, image_height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image_data);
	stbi_image_free(image_data);

	*out_texture = image_texture;
	*out_width = image_width;
	*out_height = image_height;

	return true;
}