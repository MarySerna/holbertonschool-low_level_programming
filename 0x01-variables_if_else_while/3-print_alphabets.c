#include <stdio.h>
/**
*
*main - Entry point
*
*Return: Always 0(Success)
*/
int main(void)
{
char lt;
for (lt = 'a' ; lt <= 'z' ; lt++)
{
	putchar(lt);
}
for (lt = 'A' ; lt <= 'Z' ; lt++)
{
	putchar(lt);
}
putchar('\n');
return (0);
}
