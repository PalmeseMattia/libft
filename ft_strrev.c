#include "libft.h"

void    ft_strrev(char *str)
{
    int     i;
    int     size;
    char    tmp;

    i = 0;
    size = ft_strlen(str) - 1;
    while(i < size)
    {
        tmp = str[i];
        str[i] = str[size];
        str[size] = tmp;
        i++;
        size--;
    }
}
