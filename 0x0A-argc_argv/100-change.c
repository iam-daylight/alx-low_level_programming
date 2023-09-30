#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - prints the minimum number of change
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
int amount, k, result;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
amount = atoi(argv[1]);
result = 0;
if (amount < 0)
{
printf("0\n");
return (0);
}
for (k = 0; k < 5 && amount >= 0; k++)
{
while (amount >= coins[k])
{
result++;
amount -= coins[k];
}
}
printf("%d\n", result);
return (0);
}
