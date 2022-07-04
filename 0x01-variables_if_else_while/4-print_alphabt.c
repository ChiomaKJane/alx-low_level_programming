#include<stdio.h>
/**
*main - entry point
*
*Description: print the alphabet in lowercase
*followed by a new line
*
*Return: Always 0
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
putchar(10);
return (0);
}
