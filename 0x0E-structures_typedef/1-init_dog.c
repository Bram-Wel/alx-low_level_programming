#include "dog.h"

/**
  * init_dog - Imitializes a structure variable.
  * @d: Pointer to the structure variable.
  * @name: name of the dog.
  * @age: Dog's age.
  * @owner: Dog's owner.
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if ( d != 0)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
