CC = gcc
CFAGS = -W -Wall
SOURCES= delete.c display.c insert.c main.c menu.c quit.c search.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=hello
all:$(EXECUTABLE)

$(EXECUTABLE):$(OBJECTS)
	$(CC) $(CFAGS) -o $@ $^

clean :
	rm *.o hello
