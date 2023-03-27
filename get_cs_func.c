#include "main.h"
#include <stddef.h>
#include <stdarg.h>
/**
 * get_cs_func - 
 * @s: 
 *
 * Return: 
 */
int (*get_cs_func(const char *s, int *index, va_list *ap))(va_list *)
{
	cs_t css[] = {
		{'c', print_char},
		{'s', print_string},
		/* {'%', a},
		{'d', print_decimal},
		{'i', print_integer},
		{'b', bin},
		{'u', a},
		{'o', oct},
		{'x', hex},
		{'X', a},
		{'S', a},
		{'p', a},
		{'r', print_reverse},
		{'R', print_rot13} */
		{'\0', NULL}
	};
	int i;

	va_list apx;
	va_copy(apx, *ap);
	for (i = 0; css[i].cs != '\0'; i++)
	{
		if (s[*index] == css[i].cs)
			return (css[i].f(&apx));
	}
	return (0);
}
