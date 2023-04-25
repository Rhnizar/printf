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

/**
 * rev_str - prints the reverse string
 * @str: the string
 * Return: count
 */

int rev_str(char *str)
{
	int i = 0;
	int count = 0;

	if (!str)
		return (ft_putstr("(null)", 0));
	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		count += ft_putchar(str[i]);
		i--;
	}
	return (count);
}

/**
 * rot13 - prints the rot13 in string
 * @str: the string
 * Return: count
 */

int rot13(char *str)
{
	int i = 0;
	int count = 0;

	if (!str)
		return (ft_putstr("(null)", 0));
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			count += ft_putchar((((str[i] - 'a') + 13) % 26) + 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			counter += ft_putchar((((str[i] - 'A') + 13) % 26) + 'A');
		else
			counter += ft_putchar(str[i]);
		i++;
	}
	return (counter);
}
