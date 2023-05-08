#include "main.h"
#include <stdlib.h>


/**
* read_textfile- Reads a text file and prints its content to STDOUT.
* @filename: Name of the text file to be read.
* @letters: Number of letters to be read.
* Return: The actual number of bytes read and printed to STDOUT,
* or 0 if the function fails or the filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
