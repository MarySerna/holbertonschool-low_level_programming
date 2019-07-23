#include "dog.h"
#include <stdlib.h>

/**
* init_dog -  Initializes a variable type
* @d: Pointer
* @name: Parameter character
* @age: Parameter float
* @owner: Parameter character
*
* Return: No return.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

d->name = name;
d->age = age;
d->owner = owner;
}
