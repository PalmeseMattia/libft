#include "libft.h"

int ft_isprint(int c)
{
    return ((c >= ' ' && c <= '~') ? 1 : 0);
}