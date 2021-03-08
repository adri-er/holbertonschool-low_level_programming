#ifndef DOG_FILES
#define DOG_FILES

int _putchar(char);

/**
 * struct dog - Dog information.
 * @name: Dog name.
 * @age: Dogs age.
 * @owner: Name of dogs owner.
 *
 * Description: A new type of structure is defined
 * with the name dog and its information.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog;

void init_dog(struct dog *, char *, float, char *);

void print_dog(struct dog *);

typedef struct dog dog_t;

dog_t *new_dog(char *, float, char *);

void free_dog(dog_t *);

#endif
