CC=gcc
TARGET=bin/app
OBJS=main.o math.o
OBJSDIR=obj/main.o obj/math.o
LIB=lib/math.c

all: $(OBJS)
	$(CC) $(OBJSDIR) -o $(TARGET)
main.o: main.c
	$(CC) -c main.c -o obj/main.o
math.o: lib/math.c lib/math.h
	$(CC) -c $(LIB) -o obj/math.o
clean:
	rm -rf *.o
run:
	bin/app.exe
