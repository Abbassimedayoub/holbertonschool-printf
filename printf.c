#include "main.h"

/**
 * _printf - function that prints a variable number of arguments
 * @format: pointer to character
 * Return: an integer (the number of printed arguments)
 */
int _printf(const char *format, ...)
{
	int i, length;
	va_list args;
	int (*func)(va_list);

	i = 0;
	length = 0;
	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
			length++;
		}
		else
		{
			if (format[i + 1] == '\0')
			{
				putchar('%');
				length++;
				break;
			}

			if (format[i + 1] == 'c' || format[i + 1] == 's'
<<<<<<< HEAD
					|| format[i + 1] == '%' || format[i + 1] == 'd' ||
					format[i + 1] == 'i')
=======
					|| format[i + 1] == '%' || format[i + 1] == 'd'
					|| format[i + 1] == 'i')
>>>>>>> dccdec8585299fedb3cf9ab202a724c87595cf5a
			{
				func = get_func(&format[i + 1]);
				length += func(args);
			}
			else
			{
				putchar('%');
				putchar(format[i + 1]);
				length += 2;
			}
			i++;
		}
		i++;
	}
	va_end(args);
	return (length);
}
