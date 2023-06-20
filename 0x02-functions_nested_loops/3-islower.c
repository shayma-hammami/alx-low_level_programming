#include <stdio.h>
/**
 * _islower - check if the caracter is lowecase or not
 * @c: argument given in main function,to be checked
 * Return: 1 for lower case caractere,0 for uppercase or other
 */
int _islower(int c)
{
	if ((c => 97 && c <= 122)
		return (1);
	else
		return (0);
}
