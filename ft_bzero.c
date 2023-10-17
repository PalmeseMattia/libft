#include "libft.h"

/*
 * Erase first n bytes by writing zeros.
 */
void ft_bzero(void *ptr, size_t n)
{
    ft_memset(ptr, "\0", n);
}