#include "dog.h"

/**
 * init_dog - initializes
 *
 * @d: init
 * @name: name
 * @age: age
 * @owner: name
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
