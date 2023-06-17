#include <stdio.h>
/**
 *main - Entry point 
 *Return: 0 Always (success)
 */

int main() {
int i;
char letter;

for (i = 0 ; i <= 9 ; i++) 
	putchar('0' + i);
for (letter = 'a'; letter <= 'f'; letter++)
        putchar(letter);

putchar('\n');

return (0);
}

