#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - A program that prints a line with the puts function
* Return: Always 0 (success)
*/
int main(void)
{
int n = 122;

while (n >= 97)
{
putchar(n);
n--;
}
putchar('\n');
return (0);
}
