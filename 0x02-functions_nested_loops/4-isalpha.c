#include "main.h"
/**
 * _isalpha - checks letters
 * @c: charter to be checked
 * Return: returns 1 or 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
