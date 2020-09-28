#include "library/ft_library.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char    *read_file(char *filename);

int main(int argc, char **argv)
{
    int i;
    char *file;
    if (argc == 1)
    {
        write(1, "File needed", 11);
        return (1);
    }   
    
    i = 1;
    while (i < argc)
    {
        file = read_file(argv[i]);
        if (file == NULL)
            return(1);
        // if (check_file == - 1)
        //      return (1);
        // solution(file);
        // print_solution(file);
        ft_putchar('\n');
        free(file);
        i++;
    }
    return (SUCCESS);
}