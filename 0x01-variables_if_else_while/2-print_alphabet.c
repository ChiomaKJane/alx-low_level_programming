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
char a;
for (a - 'a'; a < -'z' ; a++)
putchar(a);
putchar('\n');
return (0);
}
