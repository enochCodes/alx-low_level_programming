#!/bin/bash
echo 'int getpid() { return 9; }' > /tmp/win.c; gcc -shared -o /tmp/win.so /tmp/win.c
LD_PRELOAD=/tmp/win.so
