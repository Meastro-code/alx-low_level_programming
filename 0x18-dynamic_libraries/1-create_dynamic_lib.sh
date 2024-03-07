#!/bin/bash

# Compile all .c files into object files
gcc -Wall -Werror -pedantic -fPIC -c *.c

# Create the dynamic library liball.so
gcc -shared -o liball.so *.o

# Clean up intermediate object files
rm *.o

echo "Dynamic library liball.so created successfully!"
