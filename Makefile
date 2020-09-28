FILES = main.c read_file.c

FLAGS = -Wall -Werror -Wextra

LIB = library/libbsq

OUTPUT = bsq

TEST = example_file.txt

compile: # Don't forget to remove the run
	gcc $(FLAGS) $(FILES) $(LIB) -o $(OUTPUT) 
	$(MAKE) run

run:
	./$(OUTPUT) $(TEST)

test2:

fclean:
	rm $(OUTPUT)

liblist:
	ar -t $(LIB)

