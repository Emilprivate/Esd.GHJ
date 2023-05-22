# Compiler and Flags
CC = g++
CFLAGS = -I./Libraries/glew/include -I./Libraries/imgui -IC:/Progra~1/Java/jdk-20/include -IC:/Progra~1/Java/jdk-20/include/win32 -I./Libraries/minhook/include
LFLAGS = -shared
LIBS = -lopengl32 -luser32 -lDwmapi -lgdi32 ./Libraries/minhook/bin/MinHook.x64.lib

GLEW_SRC = ./glew.c

# Source files
SRC = main.cpp \
      ./Libraries/imgui/imgui.cpp \
      ./Libraries/imgui/imgui_draw.cpp \
      ./Libraries/imgui/imgui_widgets.cpp \
      ./Libraries/imgui/imgui_tables.cpp \
      ./Libraries/imgui/imgui_impl_win32.cpp \
      ./Libraries/imgui/imgui_impl_opengl3.cpp \
      ./Libraries/imgui/imgui_demo.cpp \
      $(GLEW_SRC)

# Output file
OUTFILE = Build/Proto2.dll

all: $(OUTFILE)

$(OUTFILE): $(SRC)
	$(CC) $(CFLAGS) $(LFLAGS) -o $(OUTFILE) $(SRC) $(LIBS)

clean:
	$(RM) $(OUTFILE)

# Compilation command for glew.c with disabled warnings
$(GLEW_SRC):
	$(CC) $(CFLAGS) -w -c $(GLEW_SRC) -o $(GLEW_SRC:.c=.o)
