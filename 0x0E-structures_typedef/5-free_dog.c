#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - Free's memory allocated to structure, dog.
  * @d: Pointer to structure.
  */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
