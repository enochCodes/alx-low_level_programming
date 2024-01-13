#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	if (argc > 1 && argc < 3)
	{
		int i;
		int mul = 1;

		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);	
		}
		printf("%d\n", mul);
	}
	else{
		printf("Error\n");
	}
	return (0);
}

