<div align="center">

# Esd.PZ - Project Zomboid
*Cheat for Project Zomboid*

[![Cheat Menu](https://i.imgur.com/owsw0ni.png)]()

</div>

**Links**:
- 📝 [Unknowncheats](https://www.unknowncheats.me/forum/other-mmorpg-and-strategy/584072-project-zomboid-cheat-esdpz.html)
- 🎥 [Youtube Demo](https://www.youtube.com/watch?v=unk9719IUTI&ab_channel=redfane)



## Loader
> Check out the loader made by my partner Okie in the project: [Loader](https://github.com/okieeee/PZ-Injector)

## Installation Guide

### Requirements:
- [Visual Studio](https://visualstudio.microsoft.com/free-developer-offers/)
   - Requires C++14 minimum
- [JDK 20](https://www.oracle.com/java/technologies/downloads/)




### Installation

1) Clone the entire repository
```
git clone https://github.com/Emilprivate/Esd.GHJ.git
```
2) Open the Visual Studio project file
```
cd Project Zomboid->Prototypes->Prototype<version>->./Prototype<version>.sln
```
3) Configure Visual Studio with the libraries (You may not need to do any of this anymore, but in-case you do it's here):
```
1) Project -> Properties

2) Configuration
- At the top left corner click the dropdown menu and select "All Configurations", also select "All Platforms" on the right.

3) Include paths
-> C/C++
- Make sure to include all the library include related file paths inside of "Additional Include Directories"
  - Include related file paths:
    - Libraries\stb
    - Libraries\GLx64
    - Libraries\GLx86
    - Libraries\ImGui
    - Libraries\Minhook\include
    - jdk-20\include\win32
    - jdk-20\include

4) Linker paths
-> Linker
- Make sure to include all the library linker related file paths inside of "Additional Library Directories"
  - Linker related file paths:
    - Libraries\GLx64
    - Libraries\GLx86
    - Libraries\Minhook\bin
    - Libraries\json\json.h
-> Linker->Input
  - "Additional Dependencies"
    - MinHook.x64.lib
    - MinHook.x86.lib

5) Additional checks:
- Make sure that Configuration Properties -> Advanced -> "Character Set" is set to "Use Multi-Byte Character Set"

- Make sure that Configuration Properties -> General -> "Configuration Type" is set to Dynamic Library (.dll), and C++ Language Standard is set to a minimum of C++14 Standard.

- Make sure that Minhook->bin->MinHook.x64.dll & MinHook.x86.dll are in their respective compilation folders. If you're compiling as x86, then make sure that you add the x86.dll file of MinHook inside there and inject EsdPZ / Prototype<version> while the MinHook dll is in the folder.
```
