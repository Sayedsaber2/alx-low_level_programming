#include "main.h"
/**
 *  print_last_digit - prints the last digit of a number
 *  @n:task numper input
 *  Return: lastdigit
 */
int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		lastdigit = -1 * (n % 10);
	else
		lastdigit = % 10;
	_putcar(lastdigit + '0');
	return (lastdigit);
}
