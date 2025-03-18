CCFLAGS=-Wall -pedantic -Werror
CC=gcc

all: build

build:
	$(CC) $(CCFLAGS) ./src/*.c -o *.c -o cdnd.out