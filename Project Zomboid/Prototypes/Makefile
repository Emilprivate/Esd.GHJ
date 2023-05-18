# Define the C++ compiler to use
CC = g++

# Define the JDK include path
JDK_INCLUDE_PATH = C:/Progra~1/Java/jdk-20/include
JNI_INCLUDE_PATH = $(JDK_INCLUDE_PATH)/win32

# Define any compile-time flags
CFLAGS = -I$(JDK_INCLUDE_PATH) -I$(JNI_INCLUDE_PATH) -I./Libraries/imgui -I./Libraries/glfw-3.3.8/include -I./Libraries/glew/include

# Define the target
TARGET = Build/Proto1.dll

IMGUI_DIR = ./Libraries/imgui

IMGUI_SRCS = $(IMGUI_DIR)/imgui.cpp \
             $(IMGUI_DIR)/imgui_demo.cpp \
             $(IMGUI_DIR)/imgui_draw.cpp \
             $(IMGUI_DIR)/imgui_widgets.cpp \
             $(IMGUI_DIR)/imgui_impl_glfw.cpp \
             $(IMGUI_DIR)/imgui_impl_opengl3.cpp \
             $(IMGUI_DIR)/imgui_tables.cpp \
             $(IMGUI_DIR)/imgui_impl_win32.cpp

IMGUI_OBJS = $(IMGUI_SRCS:.cpp=.o)

# Define the libraries to link against
LIBS = -lglfw3 -lopengl32 -luser32 -lDwmapi -lgdi32

# Compile ImGui into an object file
$(IMGUI_DIR)/%.o: $(IMGUI_DIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Compile the main program and link it with ImGui into a DLL
$(TARGET): main.cpp $(IMGUI_OBJS)
	$(CC) $(CFLAGS) -shared -o $@ $^ $(LIBS)

.PHONY: clean

clean:
	rm -f $(TARGET) $(IMGUI_DIR)/*.o
