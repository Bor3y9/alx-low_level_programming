#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  print_alphabet_x10 - Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{

int i;

char letter;

for (int i = 0; i <= 9; i++)
{

for (letter = 'a'; letter <= 'z'; letter++)
{

putchar(letter);
}
}
putchar('\n');
}

