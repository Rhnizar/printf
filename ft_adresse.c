#include "main.h"

/**
 * ft_adresse - adresse in memory
 * @n : number
 * @base : base in hexadecimal
 * Return: count
 */

int	ft_adresse(long long unsigned int n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_adresse(n / 16, base);
		count += ft_adresse(n % 16, base);
	}
	else
		count += ft_putchar(base[n]);
	return (count);
}

