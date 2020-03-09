#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dogs infos
 * @name: char name of the dog
 * @age: int his age
 * @owner: char his owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif