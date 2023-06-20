#include <stdio.h>
#include <math.h>

void serp_kovrik(FILE *output, int iter)
{
	int size;

	size = (int) pow(3, iter);

	fprintf(output, "P3\n%d %d\n1\n", size, size);

	for (int y = 0; y < size; y++)
	{
		for (int x = 0; x < size; x++)
		{
			if (eto_kovrik(x, y) == 0) fprintf(output, "0 0 0\t");
			else fprintf(output, "1 1 1\t");
		}

		fprintf(output, "\n");
	}
}

int eto_kovrik(int x, int y)
{
	while (1)
	{
		if ((x == 0) || (y == 0)) return 0;
		else if ((x % 3 == 1) && (y % 3 == 1)) return 1;

		x = x / 3;
		y = y / 3;
	}
}
