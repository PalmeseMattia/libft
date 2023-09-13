#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define ONES ((size_t)-1/UCHAR_MAX)
#define HIGHS (ONES * (UCHAR_MAX/2+1))


size_t strlcpy(char *dst, const char *src, size_t size);

int main(void){
	char first[] = "Bella";
    char second[] = "NOOO";
    strlcpy(first, second, (sizeof(first) / sizeof(char)));
    printf("%s\n", first);
    return 0;
}

size_t strlcpy(char *dst, const char *src, size_t size){
    const char *s = src;
	unsigned char *d = dst;
    size_t n = size;

    while(n--){
        if((*d++ = *s++) == '\0'){ /* assign and at the same time check if string endend */ 
            break;
        }
    }

	/* Not enough room in dst, add NULL and traverse rest of src */
    if (n == 0) {
		if (size != 0)
			*d = '\0';		/* NULL-terminate dst */
		while (*s++)
			;
	}

    return(s - src - 1);	/* count does not include NUL */
}


