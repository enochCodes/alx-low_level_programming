#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main = void
 * @n = number
 */
/* betty style doc ofr function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand();
	n = n > RAND_MAX / 2 ? n : -n;

	if (n > 0)
	{
		printf("is positve");
	}
	if (n == 0) 
	{
		printf("is zero");
	}
	if (n < 0)
	{
		printf("is negative");
	}
	return 0;
}
