CC=g++
CFLAGS=-I.
DEPS = solution3.h 
OBJ = problem3.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

problem3: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm $(OBJ)