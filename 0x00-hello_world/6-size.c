#include <stdio.h>
/**
* main - entry point
* Return: always 0 (success)
*/
int main(void)
{
char c;
int i,
long int li;
long long int mi;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(mi));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0)
}
