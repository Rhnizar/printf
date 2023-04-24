#include "main.h"

/**
* ft_binary - bunary
* @n : number
* return: count
*/

int ft_binary(unsigned int n)
{
    int	count;

	count = 0;
	if (n > 1)
	{
		count += ft_binary(n / 2);
		count += ft_binary(n % 2);
	}
	else
		count += ft_putchar(n + '0');
	return (count);
}