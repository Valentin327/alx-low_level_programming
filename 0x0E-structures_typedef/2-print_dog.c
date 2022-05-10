#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function hat prints a struct dog
 * @d: struct to print
 * Return: no return
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("name: (nil)\n");
	if (d->owner == NULL)
		printf("owner: (nil)\n");
	printf("Name: %s\n", d->name);
	printf("Age: %6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
