#include "ft_printf.h"

int	ft_putstr(const char *input)
{
	int	count;

	count = 0;
	if (!input)
	{
		count += ft_putstr("(null)");
		return (count);
	}
	while (*input)
	{
		count += ft_putchar(*input);
		input++;
	}
	return (count);
}
