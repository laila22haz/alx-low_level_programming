#ifndef DOG_H
#define DOG_H

/*laila22haz*/
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;


/**
 * struct dog - struct with dog info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: store different data types
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
