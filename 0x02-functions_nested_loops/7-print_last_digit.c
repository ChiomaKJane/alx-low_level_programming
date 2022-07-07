#include "main.h"

/**
 * print_last_digit -> prints the last digit
 * @n: the passed argument
 * Return: the last digit
 */
int print_last_digit(int)
{
int last = n % 10;
if (n < 0)
last = last * -1;
_putchar(last + '0');
return (last);
}
