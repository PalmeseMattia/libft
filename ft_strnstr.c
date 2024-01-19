#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
        int i;
        size_t needle_len;

        if (len == 0)
            return (0);
        needle_len = ft_strnlen(needle, len);
        if (needle_len == 0)
        	return (char *)haystack;
        i = 0;
        while (i <= len && *haystack)
        {
            if (*haystack == *needle &&
                (0 == ft_strncmp(haystack, needle, needle_len)))
                return (char *)haystack;
            i++;
            haystack++;
        }
        return (NULL);
}