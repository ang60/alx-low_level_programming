#include "main.h"
/**
 * print_alphabet - Prints alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
