#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - checking for negativity
 *
 * Return:0(sucess)
 */
int main(void)
{

	char  ch;
	for(ch = 'a'; ch <= 'z'; ch++)
	{
		if(ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar(10);

	return(0);
}
