#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a given function
 * @name: name of the person
 * @f: pointer to a function that takes a char * and returns void
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
