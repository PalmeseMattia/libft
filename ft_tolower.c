#include "libft.h"

int ft_tolower(int c)
{
    return ((c >= 'A' && c <= 'Z') ? c + 32 : c);
}