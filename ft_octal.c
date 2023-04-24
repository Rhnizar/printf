#include "main.h"

/**
* ft_octal - octal
* @n : number
* Return: count
*/

int ft_octal(unsigned int n)
{
    int	count;

	count = 0;
	if (n > 7)
	{
		count += ft_octal(n / 8);
		count += ft_octal(n % 8);
	}
	else
		count += ft_putchar(n + '0');
	return (count);
}
