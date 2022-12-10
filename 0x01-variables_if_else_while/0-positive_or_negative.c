#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main - print a random num
 *
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negetive\n", n);
	else
		printf("%d is Zero\n", n);
	return (0);
}
