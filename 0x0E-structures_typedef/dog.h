#ifndef _DOG_
#define _DOG_

/**
  * struct dog - Dog variables
  * @name: dog name
  * @age: dog's age
  * @owner: Dog's owner
  *
  * Description: variables/attributes.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
