#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */

void print_rev(char *s)
{
int wenn = 0;
while (s[wenn] != '\0')
wenn++;
while (wenn)
_putchar(s[--wenn]);
_putchar('\n');
}
