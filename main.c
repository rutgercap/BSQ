#include "library/ft_library.h"
#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    if (argc == 1)
    {
        write(1, "File needed", 11);
        return (1);
    }   

    i = 0;
    while (i < argc)
    {
        // if (read_file(argv[i]) == -1);
        //      return(1);
        // if (check_file == - 1)
        //      return (1);
        // solution(file);
        // print_solution(file);
        ft_putchar('\n');
    }
    return (SUCCESS);
}