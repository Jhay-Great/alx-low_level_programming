#include <stdio.h>
/**
  * main - Entry point
  * Description: printing lowercase and uppercase alphabets
  * Return: 0
  */
int main(void)
{
	char s, t;

	for (s = 'a'; s <= 'z'; s++)
		putchar(s);
	for (t = 'A'; t <= 'Z'; t++)
		putchar(t);
	putchar('\n');
	return (0);
}
