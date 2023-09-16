#include <stdio.h>

size_t ft_strlen(const char *s);
void *ft_memchr(const void *s, int c, size_t n);
char *strchr(const char *s, int c);

int main(void)
{
    char parola[] = "abxd";
    char lettera = 'x';
    char *match = strchr(parola,lettera);
    printf("Puntatore al carattere %c : %p\t Value: %c\n", lettera, match, *match);
    return 0;
}

size_t ft_strlen(const char *s)
{
    size_t len;
    for(len = 0; *s; s++, len++);
    return len;
}

char *strchr(const char *s, int c)
{
    return ft_memchr(s, c, ft_strlen(s));
}

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *src = (unsigned char *) s;
    while(n--){
        if((unsigned char) *src++ == (unsigned char) c){ //Maybe broken missing pointer arithmetic (src++)
            return src - 1;
        }
    }
    return (NULL);
}


