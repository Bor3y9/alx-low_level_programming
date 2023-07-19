#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - assign a random number to the variable n each time it is executed
 *and print the last digit of the number stored in the variable n
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{

int i;

for (i = 'a'; i <= 'z'; i++)
{

putchar(i);
}
putchar('\n');
}

