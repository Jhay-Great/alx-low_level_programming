#ifndef DOG_H
#define DOG_H
/**
  * struct dog - short description
  * @name: first member
  * @age: second member
  * @owner: third member
  * Descriptioin: this is a structure that accpets 2 char and 1 int
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
