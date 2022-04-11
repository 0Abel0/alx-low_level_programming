#ifndef _dog_h_
#define _dog_h_
/**
* struct dog - information about dog
* @name: name of the dog
* @age: age of dog
* @owner: owner of dog
* Description: struct called "dog" that stores its name, its age
* and the name of its owner.
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void print_dog(struct dog *d);
#endif
