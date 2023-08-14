#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct dog
 *
 * @name: name
 * @age: age
 * @owner: name
 * Description: just a lone dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
