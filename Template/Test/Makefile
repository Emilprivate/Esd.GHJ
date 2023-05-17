# Define the C++ compiler to use
CC = g++

# Define any directories containing header files
INCLUDES := $(wildcard ./TestFramework/*/)

# Define the target
TARGET = Build/UnitTest.exe

# Define the C++ source files
SRCS := ./TestFramework/TestRunner.cpp \
        ./TestFramework/SmallTest/TestFile.cpp \
        ./main.cpp

# Rule for building the target
$(TARGET): $(SRCS)
	$(CC) $(INCLUDES) -g -o $(TARGET) $(SRCS)


# Rule for running the target
run: $(TARGET)
	./$(TARGET)

# Rule for cleaning the directory
clean:
	$(RM) $(TARGET)
