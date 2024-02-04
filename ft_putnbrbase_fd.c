#include "libft.h"

int	ft_putnbrbase_fd(int number, int base, int fd)
{
	char *digits;
	int result;

	digits = "0123456789ABCDEF";
	if (fd < 0)
		return (0);
	if (number < 0)
	{
		result += ft_putchar_fd('-', fd);
		number = -number;
	}
	if (base < 2 || base > 16)
		return (0);
	if (number < base)
	{
		ft_putchar_fd(digits[number], fd);
		return (1);
	}
	result = ft_putnbrbase_fd(number / base, base, fd);
	ft_putchar_fd(digits[number % base], fd);
	return (result + 1);
}
