CC=gcc
CFLAG=-Wall
OBJGROUP=main

all: program

program: $(OBJGROUP)
()$(CC)-O -o program $(OBJGROUP)

clean:
()\rm *.o
