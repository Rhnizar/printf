#include "main.h"

/**
 * ft_unsignedint - unsigned int
 * @n : number
 * Return: count
 */

int	ft_unsignedint(unsigned int n)
{
	int	count;

	count = 0;
	count += ft_putnbr(n);
	return (count);
}
