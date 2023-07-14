#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - A program that prints a line with the puts function
* Return: Always 0 (success)
*/
int main(void)
{
int n;

for (n = 48; n <= 57; n++)
{
putchar(n);
if (n == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
