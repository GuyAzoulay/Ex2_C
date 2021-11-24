CC=gcc
FLAG= -Wall -g

.PHONY: clean all


all: connections

connections: main.c my_mat.c my_mat.h
	$(CC) $(FLAG) main.c my_mat.c my_mat.h -o connections

clean:
	rm -f connections