# C-Plus-Plus-with-SublimeText
This is a setup for writing C++ code with Sublime Text and G++. Works on Linux or Windows

To use it, you will need G++ and SublimeText. On Windows that would be Mingw64. I recommend Mingw64 8.1.0, as it's stable and some of the other versions are having issues. Link here: https://sourceforge.net/projects/mingw-w64/files/. On Linux

sudo apt-get install g++

will work just fine.

There are 2 build systems.

DEBUG MODE is good for debugging, but is slower 
and has a larger file size than release mode.

RELEASE MODE is meant for when you are ready to sell your app/game/product. This uses optimization 
and reduced file size, and speeds up run time.

WINDOWS USERS please use the Windows Build. It is a bit different than the Linux setup. To get started, simply open the Project.sublime-project file with Sublime Text.

LINUX USERS please use the Linux Build. It should support most Debian based distros, and Arch and Fedora should be supported as well. To get started, simply open the Project.sublime-project file with Sublime Text.


===========TO USE==============

So the way it works is you go CTRL+N, write a C++ source/header file, and then save it as .cpp/.hpp in src/include. If you are saving a .cpp file, save it in src as a .cpp. Of course, if you are writing a C++ header file(.h/.hpp), save it in include.

The "include" directory is linked with the compiler, so when you need to #include a hedear file from the include directory, all you have to do is #include "Example.hpp" and you're good to go.

===========TO COMPILE========= 

In Sublime Text, click Tools->Build Systems-> and then you should see Build Debug and Build Release. Depending on whether you are debugging or releasing, select either Debug or Release. Then just hit F7 to compile. 

So enjoy C++, eh?
