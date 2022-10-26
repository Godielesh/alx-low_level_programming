#include "main.h"
/**
 * _puts - it puts
 * @str: a param _puts function
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
