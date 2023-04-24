#include "main.h"
/**
 * ft_putnbr - putnbr
 * @n : number
 * Return: count
 */

int	ft_putnbr(long int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		count += ft_putnbr(n / 10);
		count += ft_putnbr(n % 10);
	}
	else
		count += ft_putchar(n + '0');
	return (count);
}
