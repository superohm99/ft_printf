#include "ft_printf.h"

int	ft_putpointer(unsigned long long input)
{
	int	count;

	count = 0;
	count += ft_putstr("0x");
	count += ft_putnbr_x(input);
	return (count);
}
