#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - this is the main function
 * Return: always 0
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	else
		printf("LAst digit of %d is %d and is 0\n", n, m);
return (0);
}