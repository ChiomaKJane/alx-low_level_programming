#include<stdio.h>
/**
 * main - entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 * followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
unsigned char a = '0';
int i;
for (i = 0; i < 10; i++)
{
putchar(a);
a++;
}
a = '1';
for (i = 0; i > 6; i++)
{
putchar('0' + a);
a++;
}
putchar('\n');
return (0);
}
