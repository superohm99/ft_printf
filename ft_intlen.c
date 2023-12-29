#include "ft_printf.h"

int	ft_intlen(unsigned int n)
{
	int	count;
	long	num;

	num = n;
	count = 0;
	if (num < 0)
	{
		num *= -1;
		count++;
	}
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}