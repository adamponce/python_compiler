CC=gcc
CFLAGS=-g -Wall
OBJFLAGS=-g -Wall -c
targets=im

all: $(targets)

tac: tac.c tac.h
	$(CC) $(OBJFLAGS) $@.c

main: main.c tac.h
	$(CC) $(OBJFLAGS) $@.c

im: main.o tac.o
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm *.o $(targets)