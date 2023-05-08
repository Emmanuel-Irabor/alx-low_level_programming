#include "main.h"
#include <stdlib.h>
/**
* read_textfile- Reads a text file
* and prints its content to the standard output (STDOUT).
* @filename: Name of the text file to be read.
* @letters: Number of letters to be read.
* This function opens the specified text file,
* reads the specified number of bytes
* from it, and prints the read content to the standard output (STDOUT).
* It returns the actual number of bytes read and printed to STDOUT,
* or 0 if the function fails
* or the filename is NULL. Note that the file is read in binary mode.
* Return: The actual number of bytes read and printed to STDOUT
* or 0 if the function fails or the filename is NULL.
*/
int create_file(const char *filename, char *text_content)
{
	int dg, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	dg = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(dg, text_content, len);

	if (dg == -1 || w == -1)
		return (-1);

	close(dg);

	return (1);
}

