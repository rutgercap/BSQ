FILES = main.c 

FLAGS = -Wall -Werror -Wextra

LIB = library/libbsq

OUTPUT = bsq

compile: # Don't forget to remove ./output
	gcc $(FLAGS) $(FILES) $(LIB) -o $(OUTPUT) && ./$(OUTPUT)

run:
	./$(OUTPUT)

fclean:
	rm $(OUTPUT)

liblist:
	ar -t $(LIB)

