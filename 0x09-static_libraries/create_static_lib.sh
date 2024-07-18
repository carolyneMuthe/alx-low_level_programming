#!/bin/bash

# Compile all .c files in the current directory to .o files
gcc -c *.c

# Create the static library liball.a from the .o files
ar rc liball.a *.o

# Index the library
ranlib liball.a
