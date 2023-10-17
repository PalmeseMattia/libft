#include "libft.h"

/*
 * Copy first n bytes to destination, memory must not overlap,
 * if so, use memmove.
 */
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *) dest;
    unsigned char *s = (unsigned char *) src;
    while(n--){
        *d++ = *s++;
    }
    return (dest);
}