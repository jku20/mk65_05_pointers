CC = gcc
OBJECTS = main.o

all : $(OBJECTS)
	$(CC) -o main main.o

main.o : main.c
	$(CC) -c main.c

.PHONY: clean

clean:
	rm *.o
