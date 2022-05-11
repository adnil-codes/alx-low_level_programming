#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - struct
 * @name: name param
 * @age: age param
 * owner: owner parama
 * Description: Struct for dog
 */
struct dog
{
	char *name;
	float *age;
	char *owner;
};

/**
 * dot_t - Typedef for struct dog
 */
typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
