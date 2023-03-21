#include "dog.h"

/**
 * init_dog - Dog initialization
 *
 * @d: first argument
 * @dog: second argument
 * @name: third argument
 * @owner: fourth argment
 *
 * Return: Always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner){

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
