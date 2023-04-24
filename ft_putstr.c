#include "main.h"

/**
 * ft_putstr - putstring
 * @str : string
 * @cheack : cheack 0 or 1
 * Return: count
 */

int	ft_putstr(char *str, int cheack)
{
	int i = 0;
	int count = 0;

	if (!str)
		str = "(null)";
	while (str[i])
	{
		if (((str[i] > 0 && str[i] < 32) || str[i] >= 127) && cheack)
		{
			count += ft_putchar('\\');
			count += ft_putchar('x');
			if (str[i] < 16)
				count += ft_putchar('0');
			count += ft_hexadecimal((unsigned int)str[i], "0123456789ABCDEF");
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	return (count);
}
