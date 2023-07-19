#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * print_sign - Write a function that prints the sign of a number.
 * @n: This is the entry
 * Return: Always 0.
 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
putchar('+');
}
else if (n == 0)
{
return (0);
putchar('0');
}
else
{
putchar('-');
return (-1);
}
}

