#include <stdio.h>
/**
 * main - prints all args
 * @argc: number of args
 * @argv: array that contains the args
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for(i = 0 ; i < argc ; i++)
printf("%s\n", argv[i]);
return (0); 
}
