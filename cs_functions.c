#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * print_char - 
 * @c: 
 *
 * Return: 
 */
int print_char(va_list *ap)
{
	va_list apx;
	va_copy(apx, *ap);
	char c;
	c = va_arg(apx, int);
	return (write(1, &c, 1));
}
/**
 * print_string - 
 * @s: 
 *
 * Return: 
 */
int print_string(va_list *ap)
{
	int i;
	va_list apx;
	va_copy(apx, *ap);
	char *s = va_arg(apx, char *);
	for (i = 0; s[i] != '\0'; i++)
		write(1, &s[i], 1);
	return (i);
}

int decimal(va_list ap)
{
	int d = va_arg(ap, int);
	return (d);
}

int print_integer(char c)
{
	return (c);
}

int a(char c)
{
	return (c);
}

int bin(char c)
{
	return (c);
}

int oct(char c)
{
	return (c);
}

int hex(char c)
{
	return (c);
}

int print_reverse(char c)
{
	return (c);
}

int print_rot13(char c)
{
	return (c);
}
