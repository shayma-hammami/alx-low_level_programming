#include <stdio.h>
#include "main.h"
/**
 * print_sign - return the sign of a number
 * @n: the nu;ber that his sign is gonna be checked
 * Return: 1 if the number is positive,0 if number =0 and -1 if it's negative
 */
int print_sign(int n)

{

	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
