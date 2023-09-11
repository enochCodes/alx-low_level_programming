#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - if n is negeate and if n is postive
 * Return: Alwayes 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand();
	n = n > RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
