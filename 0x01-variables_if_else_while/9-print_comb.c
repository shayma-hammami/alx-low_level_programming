#include <stdio.h>
/**
 *main - Entry point 
 *Return: 0 Always (success)
 */
int main() {
int i;

for (i = 0; i <= 9; i++)
{
	putchar('0' + i);
	putchar(',');
	putchar(' ');
}

putchar('\n');

return (0);
}

