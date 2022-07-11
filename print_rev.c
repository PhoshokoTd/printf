#include "main.h"
#include <stdarg.h>

/**
 * print_rev - prints a string in reverse
 * @arg: argument from _printf
 * if a flag is passed to _printf
 * Return: length of the printed string
 */
int print_rev(va_list arg)
{
	int i = 0;
	int j;
	char *s = va_arg(arg, char *);

	if (!s)
	{
		return (-1);
	}

	while (s[i])
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	return (i);
}
