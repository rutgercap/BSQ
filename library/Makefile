FILES = *.c

FLAGS = -Wall -Werror -Wextra

LIB = libbsq

update:
	gcc -c $(FLAGS) $(FILES) && ar -cvr $(LIB) *.o && rm *.o

fclean:
	rm *.o

reset:
	rm $(LIB) && gcc -c $(FLAGS) $(FILES) && ar -cvq $(LIB) *.o && rm *.o

list:
	ar -t libbsq