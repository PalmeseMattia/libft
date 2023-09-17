#include <stdio.h>

size_t ft_strlen(const char *s);
void *ft_memchr(const void *s, int c, size_t n);
char *strchr(const char *s, int c);
void *ft_memrchr(const void *s, int c, size_t n);
char *ft_strrchr(const char *s, int c);
int ft_strcmp(const char *s1, const char *s2);
int ft_memcmp(const void *s1, const void *s2, size_t n);

int main(int argc, char **argv)
{
    char *parola1 = argv[1];
    char *parola2 = argv[2];
    printf("Risultato strcmp tra %s e %s: %d\n", parola1, parola2, ft_strcmp(parola1, parola2));
    return 0;
}

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *src1 = s1;
    const unsigned char *src2 = s2;
    for(; n--; src1++, src2++){
        if(*src1 != *src2){
            return (*src1 - *src2);
        }
    }
    return 0;
}

int ft_strcmp(const char *s1, const char *s2)
{
    while(*s1 && (*s1 == *s2)){
            s1++, s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
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

