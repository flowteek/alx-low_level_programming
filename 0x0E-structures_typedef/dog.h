#ifndef _DOG_
#define _DOG_

/**
 * dog_f typedef for struct DOG
 */
typedef struct dog_f;

/**
 * struct dog - struct that stores some information of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: struct called "dog" that stores its name, its age
 * and the name of its owner.
 */
 struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
