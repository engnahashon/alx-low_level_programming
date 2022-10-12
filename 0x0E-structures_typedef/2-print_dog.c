#include "dog.h"
#include <stdio.h>
/**
  * print_dog - prints a struct dog
  * @d: struct
  */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name)
			printf("Name: %s\n", (*d).name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);

	}
}
