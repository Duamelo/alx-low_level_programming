/**
 * struct dog - dog structure
 * @name: name's dog
 * @age: dog's age
 * @owner: owner of the dog
 *
 * Description: dog structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
