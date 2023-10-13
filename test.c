#include <stdio.h>

int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *strnstr(const char *big, const char *little, size_t len);

int main(int argc, char **argv)
{
    char x[] = "bella";
    char y[] = "bella";
    strnstr(x,y,10);
    return 0;
}

char *strnstr(const char *big, const char *little, size_t len)
{
    while(*little){
        printf("%c", *little++);
    }
    printf("\n");
    return (char *)little;
}

int ft_strcmp(const char *s1, const char *s2)
{
    while(*s1 && (*s1 == *s2)){
            s1++, s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while((*s1 && (*s1 == *s2)) || n--){
            s1++, s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}
