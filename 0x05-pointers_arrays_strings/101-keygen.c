#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - random  numbers
 *
 * Return: 0 Always
*/

int main(void)
{
	int i;
	int j = 0;
	int randnum;
	char p[100];

	srand(time(NULL));
	while (i < 2772)
	{
		randnum = random() % 127;
			if (randnum > 32)
				{
				p[j] = randnum;
				j++;
				i = i + randnum;
				}
	}
	p[j] = 2772 - (i - randnum);
	p[j + 1] = '\0';
	printf("%s", p);
	return (0);
}
