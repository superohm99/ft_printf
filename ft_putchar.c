#include "ft_printf.h"

int	ft_putchar(char output)
{
	return (write(1, &output, 1));
}
