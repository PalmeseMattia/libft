#include "libft.h"

int ft_toupper(int c)
{
    return ((c >= 'a' && c <= 'z') ? c - 32 : c);
}