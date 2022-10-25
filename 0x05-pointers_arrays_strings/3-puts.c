#include "main.h"
/**
 * _puts - it puts
 * @str: a param _puts function
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
