#include "libft.h"

/*
 * The  memchr()  function  scans  the  initial n bytes of the memory area
 * pointed to by s for the first instance of c.  Both c and the  bytes  of
 * the memory area pointed to by s are interpreted as unsigned char.
 */
void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *src = (unsigned char *) s;
    while(n--){
        if((unsigned char) *src++ == (unsigned char) c){ 
            return src - 1;
        }
    }
    return (NULL);
}