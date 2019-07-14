#include <stdio.h>
/**
* main - a program that prints all arguments it receives
* @argc: argument that counts argument input
* @argv: argument the strings in an array of char*
*
* Return: 0
*/
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
