#include "main.h"
/**
 * print_last_digit - Prints last digit of a number.
 *
 *@c: ia an ASCII value
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int c)
{
	int a;

	a = c % 10;

	if (a < 0)
	{
		_putchar(-a + 48);
		return (-a);
	}
	else
	{
		_putchar(a + 48);
		return (a);
	}
}
