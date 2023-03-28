#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * print_char - 
 * @ap: 
 * Return: 
 */
int print_char(va_list *ap)
{
	va_list apx;
	char c;
	va_copy(apx, *ap);
	c = va_arg(apx, int);
	return (write(1, &c, 1));
}
/**
 * print_string - 
 * @ap: 
 * Return: 
 */
int print_string(va_list *ap)
{
	int i;
	va_list apx;
	char *s;
	va_copy(apx, *ap);
	s = va_arg(apx, char *);
	for (i = 0; s[i] != '\0'; i++)
		write(1, &s[i], 1);
	return (i);
}
/**
 * print_percent - 
 * @ap: 
 * Return: 
 */
int print_percent(va_list *ap)
{
	(void)ap;
	return (1);
}
/**
 * print_decimal - 
 * @ap: 
 * Return: 
 */
int print_decimal(va_list *ap)
{
	va_list apx;
	int d;
	va_copy(apx, *ap);
	d = va_arg(apx, int);
	return (d);
}
/**
 * print_integer - 
 * @ap:
 * Return: 
 */
int print_integer(va_list *ap)
{
	va_list apx;
	int i;
	va_copy(apx, *ap);
	i = va_arg(apx, int);
	return (i);
}

int a(va_list *ap)
{
	(void)ap;
	return (1);
}

int bin(va_list *ap)
{
	(void)ap;
	return (1);
}

int oct(va_list *ap)
{
	(void)ap;
	return (1);
}

int hex(va_list *ap)
{
	(void)ap;
	return (1);
}

int print_reverse(va_list *ap)
{
	(void)ap;
	return (1);
}

int print_rot13(va_list *ap)
{
	(void)ap;
	return (1);
}
