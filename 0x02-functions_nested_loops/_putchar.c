#include <unistd.h>
#include "main.c"
/**
 * _putchar -writes the characters c to stduot
 * @c: The characters to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
	return (write(1, &c, 1));
