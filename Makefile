CCFLAGS=-Wall -pedantic -Werror
DFLAGS=-Wall -pedantic -Werror -g
CC=gcc


build:
	$(CC) $(CCFLAGS) ./src/*.c -o cdnd.out

debug:
	$(CC) $(DFLAGS) ./src/*.c -o debug.out