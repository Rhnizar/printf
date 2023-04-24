#include "main.h"

/**
 * ft_putchar - putchar
 * @c : charater
 *Return: 1
 */

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}
