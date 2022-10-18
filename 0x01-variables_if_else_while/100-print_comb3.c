#include <stdio.h>
/**
  * main - Entry point
  * Return: 0
  */
int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			if (a != b)
			{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
			}
			else if (a == b)
			{
				continue;
			}
			else if (a == '8' && b == '9')
			{
				break;
			}
		}
	}
	putchar('\n');
	return (0);
}
