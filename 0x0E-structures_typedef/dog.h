#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct definition of dog
 * @name: name param
 * @age: age param
 * owner: owner parama
 * Description: Struct for dog
 */
typedef struct dog
{
	char *name;
	float *age;
	char *owner;
} dog_t;

/**
 * dot_t - Typedef for struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
