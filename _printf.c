#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - produces output according to a format
 * @format: a character string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int len = 0;
	int i, printed;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			len++;
		}
		else
		{
			i++;
			printed = get_cs_func(format, &i, &ap);
			if (printed == -1)
				return (-1);
			len += printed;
		}
	}
	va_end(ap);
	return (len);
}
