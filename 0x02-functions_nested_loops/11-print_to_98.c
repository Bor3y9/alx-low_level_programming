#include "main.h"

/**
 *print_to_98 - Write a function that prints all natural numbers
 * from n to 98, followed by a new line.
 *@n: number to be targeted
 *Return: always return 0
 */
void print_to_98(int n)
{
int i;
int cnt;
if (n < 98)
for (i = n; i < 98; i++)
{
printf("%d, ", i);
printf("%d\n", 98);
}
else
{
for (cnt = n; cnt > 98; cnt--)
{
printf("%d, ", cnt);
printf("%d\n", 98);
}
}
}
