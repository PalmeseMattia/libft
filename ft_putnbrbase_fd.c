#include "libft.h"

<<<<<<< HEAD
int	ft_putnbrbase_fd(int number, int base, int fd)
=======
int	ft_putnbrbase_fd(long number, int base, int fd)
>>>>>>> 7a8b37fe252a0cfc82562120fef47fc2add8f926
{
	char *digits;
	int result;

	digits = "0123456789ABCDEF";
	if (fd < 0)
		return (0);
<<<<<<< HEAD
	if (number < 0)
	{
		result += ft_putchar_fd('-', fd);
		number = -number;
	}
	if (base < 2 || base > 16)
		return (0);
=======
	if (base < 2 || base > 16)
		return (0);
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number = -number;
	}
>>>>>>> 7a8b37fe252a0cfc82562120fef47fc2add8f926
	if (number < base)
	{
		ft_putchar_fd(digits[number], fd);
		return (1);
	}
	result = ft_putnbrbase_fd(number / base, base, fd);
	ft_putchar_fd(digits[number % base], fd);
	return (result + 1);
}
