#include "libft.h"

/*
 * Copy first n bytes to destination until c is found, otherwise
 * continues and return null.
 */
void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char *d = (unsigned char *) dest;
    unsigned char *s = (unsigned char *) src;
    while(n--){
        if((unsigned char)*s == (unsigned char)c){
            return s+1;
        }
        *d++ = *s++;
    }
    return (NULL);
}