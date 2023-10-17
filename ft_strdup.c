#include "libft.h"

/*
 * The  strdup()  function returns a pointer to a new string which is a duplicate 
 * of the string s.  Memory for the new string is obtained with malloc(3), 
 * and can be freed with free(3).
 */
char *ft_strdup(const char *s)
{
    char *p = malloc(ft_strlen(s));
    ft_strlcpy(p,s, ft_strlen(s));
    return p;
}