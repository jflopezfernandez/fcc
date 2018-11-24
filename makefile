
vpath %.h include
vpath %.c src

CC := gcc

CFLAGS := -I include -Wall -Wextra -pedantic-errors
LFLAGS :=

all: fcc.exe

fcc.exe: fcc.o args.o 
	$(CC) $(CFLAGS) $(LFLAGS) -o $@ $^

fcc.o: fcc.c
	$(CC) $(CFLAGS) -c -o $@ $^

args.o: args.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf *.o *.exe
