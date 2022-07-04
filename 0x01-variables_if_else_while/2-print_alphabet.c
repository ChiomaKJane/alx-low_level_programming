#include<stdio.h>
/**
*main - entry point
*
*Description: program prints the alphabets in lowercase
*followed by a new line
*
*Return: always returns 0
*/
int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
