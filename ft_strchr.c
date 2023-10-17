#include "libft.h"

/*
 * The  strchr()  function  returns a pointer to the first occurrence of the character c in
 * the string s.
 */
char *ft_strchr(const char *s, int c)
{
    return ft_memchr(s, c, ft_strlen(s));
}