Here is the two command to run the code in command line

1st is to create an object file: 
gcc -c -DGLUT_DISABLE_ATEXIT_HACK -o test.o test.c -I"F:\program files\CodeBlocks\MinGW\freeglut\include"

Then to create the exe file: 
gcc -o test.exe test.o -L"F:\program files\CodeBlocks\MinGW\freeglut\lib" -lfreeglut -lopengl32 -lglu32 -Wl,--subsystem,windows
