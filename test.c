#include <stdio.h>

size_t ft_strlen(const char *s);

int main(void)
{
    char parola[] = "okokok";
    printf("size of parola: %ld\n", ft_strlen(parola));
    return 0;
}

size_t ft_strlen(const char *s)
{
    size_t len;
    for(len = 0; *s; s++, len++);
    return len;
}

