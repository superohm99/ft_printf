#include "ft_printf.h"

int	ft_putnbr_x(unsigned int input)
{
	int	count;
	int	digit;
	int	i;
	char*	res;

	count = 0;
	i = 0;
	res = (char*)malloc(ft_intlen(input) + 1);
	while (input > 0)
	{
		digit = input % 16;
		if (digit < 10)
			res[i] = digit + '0';
		else
			res[i] = digit - 10 + 'a';
		input /= 16;
		i++;
	}
	while (i > 0)
		count += ft_putchar(res[--i]);
	free(res);
	return(count);
}
