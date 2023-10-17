#include "libft.h"

/*
 * The strnlen() function determines the length of a fixed-size string.
 * It returns strlen(s), if that is less than maxlen,  or  maxlen  if
 * there is no null terminating ('\0') among the first maxlen characters pointed to by s.
 */
size_t ft_strnlen(const char *s, size_t maxlen)
{
    size_t len;
    for(len = 0; len < maxlen; len++, s++){
        if(!*s) break;
    }
    return len;
}