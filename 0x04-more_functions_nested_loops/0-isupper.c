#include "main.h"
/**
 * _isupper -. this is a function to check for uppercase
 * @c: an integer paramer
 * Return: 1 if uppercase, 0 if not uppercase
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
