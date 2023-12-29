#ifndef PRINTF_HEADER
#define PRINTF_HEADER


#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>



int ft_printf(const char *str, ...);
int ft_putchar(char output);
int ft_putnbr_d(int input);
int	ft_putnbr_x(unsigned int input);
int	ft_putnbr_X(unsigned int input);
int	ft_putnbr_u(unsigned int input);
int ft_putstr(const char *input);
int	ft_putpointer(unsigned long long input);

#endif
