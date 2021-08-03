PROJECT = test
OBJ = test.o dual.o
CC = g++
FLAGS = --std=c++17 -O2 -wAll -wExtra --pedantic -g

all:$(PROJECT)

.c.o:
	$(CC) $(FLAGS) -I. -c $<

$(PROJECT): $(OBJ)
	$(CC) $(OBJ) -o $(PROJECT)

clean:
	rm -f $(PROJECT) $(OBJ)
