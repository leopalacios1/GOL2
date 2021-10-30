CC = gcc
CFLAGS = -Wall -I/usr/include/ -I.
LDFLAGS = -lncurses 
DEPS = Game_of_Life.h
OBJ = Game_of_Life.o GameFunctions.o

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

game: $(OBJ)
	gcc  -o $@ $^  $(LDFLAGS) $(CFLAGS)

clean:
	rm -f $(OBJ) game 
