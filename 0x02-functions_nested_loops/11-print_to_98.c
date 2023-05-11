#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers.
 *
 *@n: is number to be passed
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
