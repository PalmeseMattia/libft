#include <stdio.h>

size_t ft_strlen(const char *s);
size_t ft_strnlen(const char *s, size_t maxlen);

int main(void)
{
    char parola[] = "okokok";
    printf("size of parola: %ld\n", ft_strnlen(parola, (size_t)10));
    return 0;
}

size_t ft_strlen(const char *s)
{
    size_t len;
    for(len = 0; *s; s++, len++);
    return len;
}

size_t ft_strnlen(const char *s, size_t maxlen)
{
    size_t len;
    for(len = 0; len < maxlen; len++,s++){
        if(!*s) break;
    }
    return len;
}

