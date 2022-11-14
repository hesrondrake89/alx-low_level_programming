#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: this struct is for a dog
 */

struct dog
{
	char *name;
	int *age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, int *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
