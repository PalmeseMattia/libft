#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while((*s1 && (*s1 == *s2)) && n--){
            s1++, s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}
