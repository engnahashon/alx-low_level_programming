#include "dog.h"
#include <stdio.h>
/**
  * init_dog - initiliaze variable of type struct dog
  * @d: struct def
  * @name: name
  * @age: age
  * @owner: owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

}