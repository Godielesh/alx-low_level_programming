#include "main.h"
/**
 * largest_number -> Returns the largest of three numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: Largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if  (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	return (largest);
}
