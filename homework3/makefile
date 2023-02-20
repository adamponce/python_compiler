CC=gcc
CFLAGS=-g -Wall
OBJFLAGS=-g -Wall -c
targets=puny

all: $(targets)

puny: punygrammar.tab.o lex.yy.o main.o tree.o
	$(CC) $(CFLAGS) $^ -o $@

lex.yy.c: punylex.l
	flex punylex.l

lex.yy: punygrammar.tab.h lex.yy.c tree.h
	$(CC) $(OBJFLAGS) $@.c

main: main.c
	$(CC) $(OBJFLAGS) $@.c

punygrammar.tab: punygrammar.tab.c
	$(CC) $(OBJFLAGS) $@.c

punygrammar.tab.h punygrammar.tab.c: punygrammar.y
	bison -d punygrammar.y

tree: tree.c tree.h
	$(CC) $(OBJFLAGS) $@.c

clean:
	rm *.o $(targets)