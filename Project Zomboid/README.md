<div align="center">

# Esd.PZ - Project Zomboid
*Cheat for Project Zomboid*

[![Cheat Menu](https://i.imgur.com/owsw0ni.png)]()

📝 [Unknowncheats](https://www.unknowncheats.me/forum/other-mmorpg-and-strategy/584072-project-zomboid-cheat-esdpz.html)
🎥 [Youtube Demo](https://www.youtube.com/watch?v=unk9719IUTI&ab_channel=redfane)

## Loader
Check out the loader made by Okie: [Loader](https://github.com/okieeee/PZ-Injector)

___

## Installation Guide
### Requirements:
[Visual Studio](https://visualstudio.microsoft.com/free-developer-offers/) &
[JDK](https://www.oracle.com/java/technologies/downloads/)



### Installation
First ensure that `Configuration` is set to `All Configurations` and `Platform` is set to `x64`

___

**Adjust the JDK with the version you have and paste this into `VC++ Directories`**

`C:\Program Files\Java\jdk-22\include\win32;C:\Program Files\Java\jdk-22\include;$(ProjectDir)\Resources\json_cpp_format;$(ProjectDir)\Resources\libraries\json;$(ProjectDir)\Resources\libraries\imgui;$(ProjectDir)\Resources\libraries\opengl\x64;$(ProjectDir)\Resources\libraries\minhook\;$(ProjectDir)\Resources\libraries\stb;$(IncludePath)`

___

Paste this into `Library Directories`

`$(ProjectDir)\Resources\libraries\minhook\x64\debug;$(ProjectDir)\Resources\libraries\opengl\x64;$(LibraryPath)`

___

Paste this into `Linker->Input`

`libMinHook.x64.lib;glew32s.lib;Shell32.lib;Comdlg32.lib;%(AdditionalDependencies)`

___

Also ensure that all files & resources are included in the project! You can do this by creating a filter and dragging everything into that. 

</div>



