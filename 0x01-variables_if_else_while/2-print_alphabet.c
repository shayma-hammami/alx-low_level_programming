#include <stdio.h>
#include <string.h>
/**
 *main - Main function
 *Return: 0 Always (success)
 */

int main(void)
{
char ch = "a";

for (ch = 'a' ; ch <= 'z'; ch++)
	putchar (ch);
putchar ("\n");
return (0);
}

