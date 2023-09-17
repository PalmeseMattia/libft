#include <stdio.h>

size_t ft_strlen(const char *s);
void *ft_memchr(const void *s, int c, size_t n);
char *strchr(const char *s, int c);
void *ft_memrchr(const void *s, int c, size_t n);
char *ft_strrchr(const char *s, int c);

int main(int argc, char **argv)
{
    char *parola = argv[1];
    char *lettera = argv[2];
    printf("Parola: %s\n", parola);
    printf("Lettera: %c\n", *lettera);
    printf("Lunghezza parola: %ld\n", ft_strlen(parola));
    char *match = ft_strrchr(parola, *lettera);
    printf("Puntatore al carattere %c : %p\t Value: %c\n", *lettera, match, *match);
    return 0;
}

size_t ft_strlen(const char *s)
{
    size_t len;
    for(len = 0; *s; s++, len++);
    return len;
}

char *ft_strrchr(const char *s, int c)
{
    return ft_memrchr(s, c, ft_strlen(s));
}

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *src = (unsigned char *) s;
    while(n--){
        if((unsigned char) *src++ == (unsigned char) c){ 
            return src - 1;
        }
    }
    return (NULL);
}

void *ft_memrchr(const void *s, int c, size_t n)
{
    unsigned char *src = (unsigned char *) s + n - 1;
    while(n--){
        if((unsigned char) *src-- == (unsigned char) c){
            return src + 1;
        }
    }
    return (NULL);
}

char *ft_strchr(const char *s, int c)
{
    return ft_memrchr(s, c, ft_strlen(s));
}

