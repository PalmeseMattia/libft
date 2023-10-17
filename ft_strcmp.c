#include "libft.h"

/*
 * The  strcmp()  function compares the two strings s1 and s2.  The locale
 * is not taken into account (for  a  locale-aware  comparison,  see  str‐
 * coll(3)).  The comparison is done using unsigned characters.
 */
int ft_strcmp(const char *s1, const char *s2)
{
    while(*s1 && (*s1 == *s2)){
            s1++, s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}