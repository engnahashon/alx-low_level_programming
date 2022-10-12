#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * new_dog - typedef new dog
  * @name: name
  * @age: age
  * @owner: owner
  *
  * Return: pointer to new dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);


}
