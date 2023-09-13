#include "main.h"
/**
 * __isalpha - function that checks for lowercase or uppercase
 * @c: the character to be checked
 *  character to by checked
 *  Return: returns 1 lowercase character or 0 for anything else
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	if (c >= 65 && c <= 90)
		return (1);
}
