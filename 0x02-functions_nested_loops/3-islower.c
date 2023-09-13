#include "main.h"
/**
 * int _islower - function that checks for lowercase
 *  character to by checked
 *  Return: returns 1 lowercase character or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
