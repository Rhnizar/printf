#include "main.h"

/**
 * ft_format - function format
 * @argp : list arguments
 * @format : format
 * Retunr: count
 */

static int	ft_format(va_list argp, char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(argp, int));
	if (format == 's')
		count += ft_putstr(va_arg(argp, char *));
	if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(argp, int));
	if (format == 'u')
		count += ft_unsignedint(va_arg(argp, int));
	if (format == 'x')
		count += ft_hexadecimal(va_arg(argp, int), "0123456789abcdef");
	if (format == 'X')
		count += ft_hexadecimal(va_arg(argp, int), "0123456789ABCDEF");
	if (format == 'p')
		count += ft_putstr("0x")
			+ ft_adresse(va_arg(argp, long unsigned), "0123456789abcdef");
	return (count);
}

/**
 * _printf - printf
 * @format : last argument in varidic function
 * Return : count
 */

int	_printf(const char *format, ...)
{
	va_list	argp;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(argp, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				count += ft_putchar('%');
			count += ft_format(argp, format[i]);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(argp);
	return (count);
}
