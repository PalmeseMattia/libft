#include "libft.h"

/*
 * Fill memory with a constant byte.
 * returning a pointer to void is useful when we don't know the type
 * of the pointer.
 */
void *ft_memset ( void * ptr, int value, size_t n)
{
    unsigned char *p = ptr;
    while(n--){
        *p++ = (unsigned char)value;
    }   
    return (ptr);
}