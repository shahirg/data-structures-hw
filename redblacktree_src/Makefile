CC=g++
CFLAGS=-I.
DEPS = rbt.h 
OBJ = main.o delete_max.o delete_min.o delete.o find_max.o find_min.o insert.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm -f $(OBJ) 