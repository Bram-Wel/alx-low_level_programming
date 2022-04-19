#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - Creates a new structure dog.
  * @name: Dog's name.
  * @age: Dog's age.
  * @owner: Dog's owner.
  *
  * Return: Pointer to new dog structure.
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *namec, *ownerc;
	int i, j;
	dog_t *ptr;

	for (i = 0; *(name + i) != 0; i++)
		;
	for (j = 0; *(owner + j) != 0; j++)
		;
	namec = malloc((i + 1) * sizeof(char));
	if (namec == 0)
	{
		free(namec);
		return (0);
	}
	ownerc = malloc((j + 1) * sizeof(char));
	if (ownerc == 0)
	{
		free(ownerc);
		return (0);
	}
	i = 0;
	while (*name != 0)
	{
		*(namec + i) = *name;
		name++;
		i++;
	}
	*(namec + i) = 0;
	j = 0;
	while (*owner != 0)
	{
		*(ownerc + j) = *owner;
		owner++;
		j++;
	}
	*(ownerc + j) = 0;
	ptr = malloc(sizeof(dog_t));
	if (ptr == 0)
	{
		free(ptr);
		return (0);
	}
	ptr->name = namec;
	ptr->age = age;
	ptr->owner = ownerc;
	return (ptr);
}
