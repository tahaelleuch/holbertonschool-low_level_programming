#include <stdio.h>
/**
 * main - random  numbers
 * Crack a password
 * Return: 0 Always
*/

int main(void)
{
	int i;
	int randnum;
	char p[100];

	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		randnum = random() % 127;
			if(randnum > 32)
				p[i] = randnum;
			
	}
	p[101] = '\0';
	printf("%s", p);

	return (0);
}
