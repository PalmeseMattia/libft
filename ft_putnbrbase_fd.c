#include "libft.h"

int	ft_putnbrbase_fd(long number, int base, int fd)
{
	char *digits;
	int result;

	digits = "0123456789abcdef";
	if (fd < 0)
		return (0);
	if (base < 2 || base > 16)
		return (0);
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number = -number;
	}
	if (number < base)
	{
		ft_putchar_fd(digits[number], fd);
		return (1);
	}
	result = ft_putnbrbase_fd(number / base, base, fd);
	ft_putchar_fd(digits[number % base], fd);
	return (result + 1);
}
