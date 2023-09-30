#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create a static library from the object files
ar rcs liball.a *.o

# Optionally, you can clean up the .o files if you don't need them
# rm -f *.o

echo "Library build complete."

