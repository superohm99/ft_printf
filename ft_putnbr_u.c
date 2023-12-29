#include "ft_printf.h"

int	ft_putnbr_u(unsigned int input)
{
	int	count;

	count = 0;
	if (input <= 9)
		count += ft_putchar(input + '0');
	else
	{
		count += ft_putnbr_u(input / 10);
		count += ft_putnbr_u(input % 10);
	}
	return (count);
}
