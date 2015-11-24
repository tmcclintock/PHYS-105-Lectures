#Name the executable
EXEC = gaussian.exe

#List all of the "objects" you will compile
OBJS = gauss_main.o function.o

#Name your c-ccompiler
CC = gcc

#Link to any libraries
OFLAGS = -lm

.SUFFIXES:.c.o
%.o: %.c
	$(CC) -c $< -o $@
$(EXEC): $(OBJS)
	$(CC) $(OBJS) -o $(EXEC) $(OFLAGS)
	rm $(OBJS)
