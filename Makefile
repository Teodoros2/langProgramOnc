CC = gcc
CFLAGS = -Wall -g

all: simple_lang

simple_lang: main.o lexer.o parser.o evaluator.o
	$(CC) -o simple_lang main.o lexer.o parser.o evaluator.o

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o simple_lang
