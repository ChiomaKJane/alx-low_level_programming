#include "main.h"
/**
 * jack_bauer -> prints 24 hours
 * n from 00:00 to 23:59, min loop counts mins, while hour loop counts hours
 * and resets mins
 * Return: 0
 */
void jack_bauer(void)
{
int i, j;
for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
if (i < 10)
{
_putchar('0');
_putchar(i + '0');
}
else if (i >= 10)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
if (j < 10)
{
_putchar(':');
_putchar('0');
_putchar(j + '0');
}
else if (j >= 10)
{
_putchar(':');
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
}
