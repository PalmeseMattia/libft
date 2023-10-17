#include "libft.h"

/*
 * Copy first n bytes to destination. 
 * Memory may overlap, as though the bytes in src are first copied
 * in memory that does not overlap src or dest. 
 */
void *ft_memmove(void *dest, const void *src, size_t n)
{
        uint8_t* from = (uint8_t*) src;
        uint8_t* to = (uint8_t*) dest;

        if (from == to || n == 0)
                return dest;
        if (to > from && to-from < (int)n) {
                int i;
                for(i=n-1; i>=0; i--)
                        to[i] = from[i];
                return dest;
        }
        if (from > to && from-to < (int)n) {
                size_t i;
                for(i=0; i<n; i++)
                        to[i] = from[i];
                return dest;
        }
        ft_memcpy(dest, src, n);
        return dest;
}