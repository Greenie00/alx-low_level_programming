#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int x;
	int y;
	int z;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		z = x * y;
		printf("%d\n", z);
	}

	else
	{
		printf("Error");
		return (1);
	}

	return (0);
}
