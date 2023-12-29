#include "ft_printf.h"

static int	ft_check_type(char str, va_list *arg)
{
	int	count;

	count = 0;
	if (str == 'c')
		count += ft_putchar(va_arg(*arg, int));
	if (str == 's')
		count += ft_putstr(va_arg(*arg, char *));
	if (str == 'p')
		count += ft_putpointer(va_arg(*arg, unsigned long long));
	if (str == 'd' || str == 'i')
		count += ft_putnbr_d(va_arg(*arg, int));
	if (str == 'u')
		count += ft_putnbr_u(va_arg(*arg, unsigned int));
	if (str == 'x')
		count += ft_putnbr_x(va_arg(*arg, unsigned int));
	if (str == 'X')
		count += ft_putnbr_X(va_arg(*arg, unsigned int));
	if (str == '%')
		count += ft_putchar('%');
	return (count);
}


int	ft_printf(const char *str, ...)
{
	va_list		arg;
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (!str)
		return (0);
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_check_type(str[i + 1], &arg);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			count++;
		}
		i++;
	}
	va_end(arg);
	return (count);
}
