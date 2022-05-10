#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - data structures (a avraiable that contain other variables)
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
