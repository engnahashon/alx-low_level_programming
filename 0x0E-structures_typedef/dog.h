#ifndef _DOG_H
#define _DOG_H
/**
  * struct dog: dog structure
  * @name: name
  * @age: age
  * @owner: owner
  *
  * Description: Dog Details
  */
struct dog
{
	char *name;
	float age;
	char *owner;

};

dog_t *new_dog(char *name, float age, char *owner);
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
