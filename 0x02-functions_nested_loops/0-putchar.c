#include "main.h"
/**
 * main - Prints putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char f[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(f[a]);
	}
	_putchar('\n');
	return (0);
}
