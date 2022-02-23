CC=g++
CFLAGS=-I.
DEPS = solution2.h 
OBJ = problem2.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

problem2: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

