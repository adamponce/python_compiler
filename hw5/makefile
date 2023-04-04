CC=gcc
CFLAGS=-g -Wall
OBJFLAGS=-g -Wall -c
targets=puny

all: $(targets)

puny: punygram.tab.o lex.yy.o main.o tree.o symtab.o dot.o type.o
	$(CC) $(CFLAGS) $^ -o $@

lex.yy.c: punylex.l
	flex punylex.l

lex.yy: punygram.tab.h lex.yy.c tree.h
	$(CC) $(OBJFLAGS) $@.c

main: main.c symtab.h tree.h
	$(CC) $(OBJFLAGS) $@.c

punygram.tab: punygram.tab.c
	$(CC) $(OBJFLAGS) $@.c

punygram.tab.h punygram.tab.c: punygram.y
	bison -d punygram.y

tree: tree.c tree.h symtab.h
	$(CC) $(OBJFLAGS) $@.c

symtab: symtab.c tree.h symtab.h
	$(CC) $(OBJFLAGS) $@.c

dot: dot.c dot.h tree.h
	$(CC) $(OBJFLAGS) $@.c

type: type.c type.h tree.h symtab.h
	$(CC) $(OBJFLAGS) $@.c

clean:
	rm *.o $(targets) punygram.tab.c punygram.tab.h lex.yy.c *.dot *.png