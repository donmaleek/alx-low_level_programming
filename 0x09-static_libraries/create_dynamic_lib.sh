#!/bin/bash

#compile all .c files into position-independent code(fpic)

gcc -c -fPIC *.c

#create a shared file from the object files created

gcc -shared -o myLib.so *.o

#clean up all the .o files (source files) once done

rm -f *.o

#output print after compilation

echo "COMPILATION COMPLETED ENGINEER MATHIAS!."

