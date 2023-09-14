#include "main.h"
#include <stdio.h>

/**
 * times_table - main function
 * Return: void
 */

void times_table(void)
{
	int m, n, j;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			j = m * n;
			if (n == 0)
				printf("%d, ", j);
			else
			{
				printf("%2d", j);
				if (n != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
