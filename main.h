#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * struct cs - Conversion specifiers
 * @cs: indicator
 * @f: pointer to function to launch
 */
typedef struct cs
{
	char cs;
	int (*f)(va_list *);
} cs_t;

int print_char(va_list *ap);
int print_string(va_list *ap);
int print_percent(va_list *ap);
int print_decimal(va_list *ap);
int print_integer(va_list *ap);

int a(va_list *ap);
int bin(va_list *ap);
int oct(va_list *ap);
int hex(va_list *ap);
int print_reverse(va_list *ap);
int print_rot13(va_list *ap);

int (*get_cs_func(const char *s, int *index, va_list *ap))(va_list *);
int _printf(const char *format, ...);

#endif /* MAIN_H */
