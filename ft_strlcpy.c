#include "libft.h"

/*
 * The strlcpy() and strlcat() functions copy and 
 * concatenate strings respectively.
 * Note that a byte for the NULL should be included in size.
 * Android style
 */
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    const char *s = src;
	unsigned char *d = (unsigned char *)dst;
    size_t n = size;

    while(n--){
        if((*d++ = *s++) == '\0'){ /* assign and at the same time check if string endend */ 
        break;
        }
    }
	/* Not enough room in dst, add NULL and traverse rest of src */
    if (n == 0) {
		if (size != 0)
			*d = '\0';		/* NULL-terminate dst */
		while (*s++);
	}
    return(s - src - 1);	/* count does not include NUL */
}