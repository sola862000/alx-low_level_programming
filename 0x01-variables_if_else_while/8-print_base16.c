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
int m;

for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (m = 97; m <= 102; m++)
{
putchar(m);
}
putchar('\n');
return (0);
}
