#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - A program that prints a line with the puts function
* Return: Always 0 (success)
*/
int main(void)
{
char n = 'a';

while (n <= 'z')
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
