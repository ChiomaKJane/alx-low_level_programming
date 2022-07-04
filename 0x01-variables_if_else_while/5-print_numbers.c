#include<stdio.h>
/**
 * main - entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 * followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
int a = 0;
for (; a < 10 ; a++)
printf("%d", a);
putchar('\n');
return (0);
}
