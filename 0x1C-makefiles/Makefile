# Creating a Makefile from school.c main.c and m.h
# make: build  school  as the executable file
# make clean: clean-up all built files

school:
	gcc school.c main.c -o school

# To create the executable file school we need the object file
# school.o main.o
#school: school.o main.o
#	gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -0 school school.o main.o

# To create the object sile school.o 
# we need the source file school.c m.h and main.c
#school.o: school.c main.c m.h
#	gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c school.c main.c

## To create the object file main.o we need 
#main.o: school.c main.c m.h
#	gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c main.c school.c
clean:
	rm -f school *.o*
