#
#
#
CC=gcc
CFLAGS=-Wall 


all : longest_line
.PHONY : all

longest_line : punctCount.o copy.o main.o
	$(CC) $(CFLAGS) -o longest_line punctCount.o copy.o main.o

puncCount.o : puncCount.c 
	$(CC) $(CFLAGS) -c -o punctCount.o punctCount.c
	
copy.o : copy.c 
	$(CC) -Wall -c -o copy.o copy.c

main.o : main.c 
	$(CC) -Wall -c -o main.o main.c
	
	
debug:clean getline.c copy.c main.c
	$(CC) -Wall -g -o test punctCount.c copy.c main.c 
	gdb -tui  test

	
	
.PHONY: clean
clean : 
	rm -rf *.o 
	
