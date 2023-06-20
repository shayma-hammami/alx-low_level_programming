#include <stdio.h>
/**
 * _isalpha - check if it's a caracter  or not
 * @c: argument given in main function,to be checked
 * Return: 1  caractere,0 for other
 */
int _isalpha(int c)
{
	if ((c => 97 && c <= 122) || (c => 65 && c <= 90)
		return (1);
	else
		return (0);
}
