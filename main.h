#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

int	ft_putchar(char c);
int	ft_putnbr(long int n);
int	ft_putstr(char *str);
int	ft_unsignedint(unsigned int n);
int	ft_hexadecimal(unsigned int n, char *base);
int	ft_adresse(long long unsigned int n, char *base);

#endif
