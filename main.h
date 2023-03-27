#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * struct cs - 
 * @cs:
 * @f: 
 */
typedef struct cs
{
	char cs;
	int (*f)(va_list *);
} cs_t;

int print_char(va_list *ap);
int print_string(va_list *ap);
int print_decimal(va_list ap);
int print_integer(char c);
int bin(char c);
int oct(char c);
int hex(char c);
int print_reverse(char c);
int print_rot13(char c);
int (*get_cs_func(const char *s, int *index, va_list *ap))(va_list *);
int _printf(const char *format, ...);

#endif /* MAIN_H */
