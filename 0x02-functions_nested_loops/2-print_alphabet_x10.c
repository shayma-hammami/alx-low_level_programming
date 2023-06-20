#include <stdio.h>
/**
 *print_alphabet_x10 -  prints the alphabet, in lowercase X10
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar("\n");
		letter = 'a';
	}
}

