#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: passed args
 * Return: last digit
 */
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
