#include "main.h"
#include <ctype.h>
/**
 * _isalpha - function that checks for lowercase or uppercase
 * @c: the character to be checked
 *  character to by checked
 *  Return: returns 1 lowercase character or 0 for anything else
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
		{
			return (0);
		}
}
