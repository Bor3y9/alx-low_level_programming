#include <stdio.h>

/**
 * main - program should print a number, followed by a new line
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argc  - 1);
	return (0);
}
