#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: first value
 *
 * Return: String with recursive methode
 */
void _puts_recursion(char *s)
{
	putchar(*s);
	if (*s == '\0')
	return;
	_puts_recursion(s + 1);
}
