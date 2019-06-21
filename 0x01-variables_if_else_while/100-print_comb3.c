#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int e = 0;
	int f_d;
	int l_d;

	while (e <= 99)
	{
		f_d = (e / 10 + '0');
		l_d = (e % 10 + '0');

		if (f_d < l_d)
		{
			putchar(f_d);
			putchar(l_d);

			if (e != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		e++;
	}
putchar('\n');
return (0);
}
