#include "ft_printf.h"

int	ft_putnbr_d(int input)
{
	int	count;

	count = 0;
	if (input == -2147483648)
	{
		count += ft_putnbr_d(-1 * 2147483);
		count += ft_putnbr_d(648);
		return (count);
	}
	if (input <= 9 && input >= 0)
		count += ft_putchar(input + '0');
	else if (input < 0)
	{
		count += ft_putchar('-');
		count += ft_putnbr_d(-1 * input);
	}
	else
	{
		count += ft_putnbr_d(input / 10);
		count += ft_putnbr_d(input % 10);
	}
	return (count);
}
