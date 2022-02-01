CC=g++
CFLAGS=-I.
DEPS = solution1.h 
OBJ = problem1.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

problem1: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm -f $(OBJ) 