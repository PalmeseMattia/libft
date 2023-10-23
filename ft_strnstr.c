#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
        int i;
        size_t needle_len;

        if (0 == (needle_len = ft_strnlen(needle, len)))
        	return (char *)haystack;
        for (i=0; i<=(int)(len-needle_len); i++){
            if ((haystack[0] == needle[0]) &&
                (0 == ft_strncmp(haystack, needle, needle_len)))
                    return (char *)haystack;
                haystack++;
        }
        return NULL;
}