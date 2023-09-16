#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n);

int main(void)
{
	size_t BUFSIZE = 2;
	char str1[] = "zio";
	char str2[] = "zia";
    	printf("size of zio: %ld\n", sizeof(str1));
	printf("size of zia: %ld\n", sizeof(str2));
	char result[2];
	printf("size of concat: %ld\n", sizeof(result));
	// copying first string to result
	char *firstcopy = ft_memcpy(result, str1, sizeof(str1) - 1);
	ft_memcpy(result + (sizeof(str1)-1), str2, sizeof(str2));
	printf("first copy result: %s\n", firstcopy);
	return 0;
}

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d = (unsigned char *) dest;
	unsigned char *s = (unsigned char *) src;
     	while(n--){
		*d++ = *s++;
	}
	return (dest);
}

