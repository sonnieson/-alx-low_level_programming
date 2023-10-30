#!/bin/bash

c_files=$(ls *.c 2>/dev/null)

if [ -n "$c_files" ]; then

	for file in $c_files; do
		gcc -c "$file" -o "${file%.c}.o"
	done

	ar -rc liball.a *.o

	echo "Static library 'liball.a' created from .c files."
else
	echo "No .c files found in the current directory."
fi
