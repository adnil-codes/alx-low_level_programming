#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct definition of dog
 * @name: name param
 * @age: age param
 * owner: owner parama
 * Description: Struct for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
