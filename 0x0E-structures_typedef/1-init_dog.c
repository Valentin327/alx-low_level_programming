#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: the data structure
 * @name: first membere of structure
 * @age: second member of structure
 * @owner: third member of structure
 *
 * Return: no return
 *
 * Description: Longer description
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
