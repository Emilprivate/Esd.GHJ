# Define the C++ compiler to use
CC = g++

# Define any directories containing header files
INCLUDES := $(wildcard ./Gamehack/*/)

# Define the target
TARGET = Build/EsdPZ.exe

# Define the C++ source files
SRCS := ./main.cpp

# Rule for building the target
$(TARGET): $(SRCS)
	$(CC) $(INCLUDES) -g -o $(TARGET) $(SRCS)

# Rule for running the target
run: $(TARGET)
	./$(TARGET)

# Rule for cleaning the directory
clean:
	$(RM) $(TARGET)
