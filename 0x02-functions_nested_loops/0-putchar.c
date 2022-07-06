#include "main.h"

/**
 * main - prints putchar
 *
 * Description: prints putchar
 * followed by a new line
 *
 * Return: always 0
 */
int main(void)
{
char text[8] = "putchar";
unsigned int i = 0;
for (i = 0; i < 7; i++)
{
_putchar(text[i]);
}
_putchar('\n');

return (0);
}
