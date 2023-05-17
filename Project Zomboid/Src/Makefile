# Define the C++ compiler to use
CC = g++

# Define the JDK include path
JDK_INCLUDE_PATH=C:/Program Files/Java/jdk-20/include
JNI_INCLUDE_PATH=$(JDK_INCLUDE_PATH)/win32

# Define any compile-time flags
CFLAGS=-I"C:/Program Files/Java/jdk-20/include" -I"C:/Program Files/Java/jdk-20/include/win32"
LIBS=-shared

# Define any directories containing header files
# INCLUDES := $(wildcard ./Gamehack/*/)

# Define the target
TARGET = Build/EsdPZ.dll

# Define the C++ source files
SRCS := ./main.cpp

# Rule for building the target
$(TARGET): $(SRCS)
	$(CC) -shared $(INCLUDES) $(CFLAGS) -o $(TARGET) $(SRCS)

# Rule for running the target
run: $(TARGET)
	./$(TARGET)

# Rule for cleaning the directory
clean:
	$(RM) $(TARGET)