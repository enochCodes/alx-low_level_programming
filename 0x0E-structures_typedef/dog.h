#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - a data srtuct for the dog
 * @name: pointer to charactor
 * @age: pointer to integer
 * @owner: pominter to charactor
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
