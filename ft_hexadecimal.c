#include "main.h"

/**
 * ft_hexadecimal - hexadecimal
 * @n : number
 * @base : base in hexadecimal
 * Return: count
 */

int	ft_hexadecimal(unsigned int n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_hexadecimal(n / 16, base);
		count += ft_hexadecimal(n % 16, base);
	}
	else
		count += ft_putchar(base[n]);
	return (count);
}

