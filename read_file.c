#include "library/ft_library.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/*  Takes string filename as input and returns the filesize as int. 
    Returns -1 and prints error in case of error whilst reading file. */
int     file_size(char *filename)
{
    char    *temp;
    int     fd;
    int     i;

    temp = (char*)malloc(11);
    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (-1);
    i = 0;
    while (read(fd, temp, 10) != 0)
    {
        i++;
    }
    free(temp);
    close(fd);
    return (i * 10);
}

/*  Takes string filename as input and returns the file in a null terminated string.
    Returns NULL and prints error in case of error whilst reading file. */
char    *read_file(char *filename)
{
    char    *file;
    int     fd;
    int     buff_size;

    buff_size = file_size(filename);
    fd = open(filename, O_RDONLY);
    if (fd == -1 || buff_size == -1)
    {
		write(2, "Error opening file", 18);
		return (NULL);
	} 
    file = (char*) malloc(buff_size + 1);
    read(fd, file, buff_size);
    file[buff_size + 1] = '\0';
    close(fd);
    return (file);
}