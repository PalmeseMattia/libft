#include "libft.h"

/*
 * append src to end of dst
 *
 */
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t maxlen= size - ft_strlen(dst) - 1;    /* Maximum number of characters we can append */
    size_t srclen = ft_strlen(src);
    size_t dstlen = ft_strnlen(dst, size); 
    if(dstlen == size) return size + srclen;        
    if(srclen < size - dstlen){    /* If the src fit inside size we memcpy */
        ft_memcpy(dst + dstlen, src, srclen + 1);
    } else {
        ft_memcpy(dst + dstlen, src, maxlen -1);
        dst[dstlen + maxlen - 1] = '\0';
    }
    return dstlen + srclen; 
}