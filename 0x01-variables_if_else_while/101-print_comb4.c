#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int p = 0;
	int f_d;
	int m_d;
	int l_d;

	while (p <= 999)
	{
		f_d = (p / 100 + '0');
		m_d = (p / 10 % 10 + '0');
		l_d = (p % 10 + '0');

		if ((f_d < m_d) && (m_d < l_d))
		{
			putchar(f_d);
			putchar(m_d);
			putchar(l_d);

			if (p != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		p++;
	}
putchar('\n');
return (0);
}

