#include "main.h"
/**
 * _puts - it puts
 * @str: a param _puts function
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
