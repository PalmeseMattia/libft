#include <stdio.h>

int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);

int main(int argc, char **argv)
{
    printf("strcmp result: %d\n", ft_strncmp("zio","zia",3)); 
    return 0;
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
