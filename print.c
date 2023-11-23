#include "main.h"

/**
 * print_char - prints character
 *@args: argument
 *
 *Return: character
 */
int print_char(va_list args)
{
	putchar(va_arg(args, int));
	return (1);
}

/**
 * print_str - prints string
 * @args: arguments
 * Return: string
 */
int print_str(va_list args)
{
	int j;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j]; j++)
	{
		putchar(str[j]);
	}
	return (j);
}

/**
 * print_pct - prints character "%"
 * @args : arguments
 * Return: character "%"
 */
int print_pct(va_list args)
{
	(void)args;
	putchar('%');
	return (1);
}

/**
 * print_dec - prints decimal
 * @args: the argument decimal
 *
 * Return: counter
 */
int print_dec(va_list args)
{
	long int n;
	int len = 0;
	long int divisor = 1;

	n = va_arg(args, int);

<<<<<<< HEAD
	if (n < 0) {
=======
	if (n < 0)
	{
>>>>>>> dccdec8585299fedb3cf9ab202a724c87595cf5a
		putchar('-');
		len++;
		n = -n;
	}
<<<<<<< HEAD
	while ((n / divisor) >= 10) {
		divisor *= 10;
	}
	while (divisor > 0) {
=======
	while ((n / divisor) >= 10)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
>>>>>>> dccdec8585299fedb3cf9ab202a724c87595cf5a
		putchar((n / divisor) + '0');
		len++;
		n %= divisor;
		divisor /= 10;
	}
<<<<<<< HEAD
	return len;
=======
	return (len);
>>>>>>> dccdec8585299fedb3cf9ab202a724c87595cf5a
}
