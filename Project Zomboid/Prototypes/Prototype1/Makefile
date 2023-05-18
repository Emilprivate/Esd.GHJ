# Define the C++ compiler to use
CC = g++

# Define the JDK include path
JDK_INCLUDE_PATH = C:/Progra~1/Java/jdk-20/include
JNI_INCLUDE_PATH = $(JDK_INCLUDE_PATH)/win32

# Define any compile-time flags
CFLAGS = -I$(JDK_INCLUDE_PATH) -I$(JNI_INCLUDE_PATH)

# Define the target
TARGET = Build/Proto1.dll

# Define the libraries to link against
LIBS = -lglfw3 -lopengl32 -luser32 -lDwmapi -lgdi32

# Compile the main program into a DLL
$(TARGET): main.cpp
	$(CC) $(CFLAGS) -shared -o $@ $^ $(LIBS)

.PHONY: clean

clean:
	rm -f $(TARGET)
