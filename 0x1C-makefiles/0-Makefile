CC = gcc # Flag for implicit rules
CFLAGS = -Wall -Wextra -Werror -pedantic -std=gnu89 -g

all: school

school: main.o
main.o: main.c school.c

clean:
	rm -rf *.o school
