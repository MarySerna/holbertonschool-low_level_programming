#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char h;
for (h = '0'; h <= '9'; h++)
{
	putchar(h);
}
for (h = 'a'; h <= 'f'; h++)
{
	putchar(h);
}
putchar('\n');
return (0);
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
