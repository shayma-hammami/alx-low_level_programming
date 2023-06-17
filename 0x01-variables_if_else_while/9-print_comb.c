#include <stdio.h>
/**
 *main - Entry point 
 *Return: 0 Always (success)
 */
int main() {
int i;

for (i = 0; i <= 8; i++)
{
	putchar('0' + i);
	putchar(',');
	putchar(' ');
}

putchar("9\n");

return (0);
}

