#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The owner's dog
 *
 * Return: Pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i, c, leng;
dog_t *newDog;

	c = leng = 0;
	while (name[leng++])
		;
	while (owner[c++])
		;
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc(leng * sizeof(newDog->name));
	if (newDog == NULL)
		return (NULL);
	for (i = 0; i < leng; i++)
		newDog->name[i] = name[i];

	newDog->age = age;

	newDog->owner = malloc(c * sizeof(newDog->owner));
	if (newDog == NULL)
		return (NULL);
	for (i = 0; i < c; i++)
		newDog->owner[i] = owner[i];
	return (newDog);
}
