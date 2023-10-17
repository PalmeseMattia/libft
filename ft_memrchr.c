#include "libft.h"

/*
 * The  memrchr()  function  is like the memchr() function, except that it
 * searches backward from the end of the n bytes pointed to by  s  instead
 * of forward from the beginning.
 */
void *ft_memrchr(const void *s, int c, size_t n)
{
    unsigned char *src = (unsigned char *) s + n;
    while(n--){
        if((unsigned char) *src-- == (unsigned char) c){
            return src + 1;
        }
    }
    return (NULL);
}