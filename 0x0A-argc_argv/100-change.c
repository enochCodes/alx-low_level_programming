#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * @argc: size
 * @argv: pointer to array
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int j;
	int amount;
	int coinCount;
	int coins[] = {25, 10, 5, 2, 1};
	int numcoins = sizeof(coins) / sizeof(coins[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	coinCount = 0;
	for (j = 0; j < numcoins; j++)
	{
		while (amount >= coins[j])
		{
			amount -= coins[j];
			coinCount++;
		}
	}
	printf("%d\n", coinCount);
	return (0);

}

