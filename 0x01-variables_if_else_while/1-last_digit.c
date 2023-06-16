#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Main function 
 *Return: 0 Always (success)
 */
int main(void)
{
int d, n;

srand(time(0));
n = rand() - RAND_MAX / 2;
d = n % 10;
if (d > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, d);
if (d == 0)
	printf("Last digit of %d is 0 and is 0\n", n);
else if (d < 6 && d != 0)
	printf("Last digit of %d id %d and is less than 6 and not 0\n", n, d);
return (0);
}

