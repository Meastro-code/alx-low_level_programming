#!/bin/bash

# Compile C functions into object files
gcc -Wall -Werror -pedantic -fPIC -c *.c

# Create the dynamic library liball.so
gcc -shared -o 100-operations.so *.o

# Verify the library
nm -D 100-operations.so
