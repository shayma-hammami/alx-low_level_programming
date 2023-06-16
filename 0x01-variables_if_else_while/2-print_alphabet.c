#include <stdio.h>
/**
 *main - Main function
 *Return: 0 Always (success)
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a' ; ch <= 'z'; ch++)
		putchar (ch);
	ch = ch + "\n";
	return (0);
}

