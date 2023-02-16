#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: Prints a string to the standard error
 * Return: 1 (Error)
 */
int main(void)
{
	const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	const size_t len = sizeof(msg) - 1;
	
	ssize_t ret = write(STDERR_FILENO, msg, len);
	return (ret == len) ? 1 : -1;
}

