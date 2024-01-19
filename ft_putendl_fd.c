#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
{
    int size = ft_strlen(s);
    write(fd, s, size);
    write(fd, "\n", 1);
}