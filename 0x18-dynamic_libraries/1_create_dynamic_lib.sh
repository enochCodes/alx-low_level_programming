#!/bin/bash
gcc -c -fPIC ./c_files/*.c
gcc -shared -o liball.so *.o
