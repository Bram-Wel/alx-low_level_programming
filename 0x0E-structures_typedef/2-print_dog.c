#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
  * print_dog - Prints the structure dog.
  * @d: Pointer to dog structure.
  */
void print_dog(struct dog *d)
{
	if (d == 0)
	{
		;
	}
	else
	{
		if (d->name == 0)
			printf("Name: %p\n", d->name);
		else
			printf("Name: %s\n", d->name);

		printf("Äge: %0.6f\n", d->age);

		if (d->owner == 0)
			printf("Owner: %p\n", d->owner);
		else
			printf("Owner: %s\n", d->owner);
	}
}
