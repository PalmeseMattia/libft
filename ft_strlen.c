#include "libft.h"

/*
 * The strlen() function calculates the length of the string pointed to by
 * s, excluding the terminating null byte ('\0').
 */
size_t ft_strlen(const char *s)
{
    size_t len;
    for(len = 0; *s; s++, len++);
    return len;
}