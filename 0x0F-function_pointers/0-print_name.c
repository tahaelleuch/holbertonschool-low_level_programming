#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: char
 * @f: function to a pointer
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
