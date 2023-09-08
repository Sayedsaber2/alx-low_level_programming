#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (not Success)
 */
int main(void)
{
	char *asd = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, asd, 59);
	return (1);
}
