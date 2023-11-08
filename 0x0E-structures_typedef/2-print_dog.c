#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a dog
 * @d: dog variable
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n Age: %f\n Owner: %s\n, d->name, d->age, d->owner");
}
