#include <stdio.h>
/**
  * main - Entry
  * Description: printing alphabets with exeptions
  * Return: Always 0
  */
int main(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		if (s != 'e' && s != 'q')
			putchar(s);
	}
	putchar('\n');
	return (0);
}
