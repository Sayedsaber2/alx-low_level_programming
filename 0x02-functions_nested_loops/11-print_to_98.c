#include <stdio.h>
/**
 * print_to_98 -  prints all natural numbers from n to 98
 * ,followed by a new line
 * @n: input
 */
void print_to_98(int n)
{
	int asd;

	if (n > 98)
	{
		for (asd = n; asd > 98; asd--)
			printf("%d, ", asd);
	}
	else
	{
		for (asd = n; asd < 98; asd++)
			 printf("%d, ", asd);
	}
	printf("98\n");
}
