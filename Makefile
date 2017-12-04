CC = g++
DEBUG = -g -O0 -pedantic-errors
CFLAGS = -Wall  -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

all: SortedDr

SortedDr: SortingDr.cpp Sorting.o
	$(CC) $(LFLAGS) -o SortingDr SortingDr.cpp Sorting.o
Sorting.o: Sorting.cpp Sorting.h
	$(CC) $(CFLAGS) Sorting.cpp

.PHONY: clean
clean:
	rm -rf *.o
	rm -rf SortingDr
