
vpath %.h include
vpath %.c src

CC := gcc

CFLAGS := -I include -Wall -Wextra -pedantic
LFLAGS :=

all: fcc.exe

fcc.exe: fcc.o
	$(CC) $(CFLAGS) $(LFLAGS) -o $@ $<

fcc.o: fcc.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf *.o *.exe
