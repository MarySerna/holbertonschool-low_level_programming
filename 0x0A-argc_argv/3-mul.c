#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that multiplies two numbers
* @argc: argument that counts argument input
* @argv: argument the strings in an array of char*
*
* Return: 0
*/
int main(int argc, char *argv[])
{
int num1, num2, mul;

if (argc != 3)
printf("Error\n");
else
{
num_1 = atoi(argv[1]);
num_2 = atoi(argv[2]);
mul = num1 * num2;
printf("%d\n", mul);
}
return (0);
}
