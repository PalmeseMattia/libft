#include <string.h>
#include <stdio.h>

/*
 * Fill memory with a constant byte.
 * returning a pointer to void is useful when we don't know the type
 * of the pointer.
 */
void *ft_memset ( void * ptr, int value, size_t n)
{
    unsigned char *p = ptr;
    while(n--){
        *p++ = (unsigned char)value;
    }   
    return (ptr);
}

/*
 * Erase first n bytes by writing zeros.
 */
void ft_bzero(void *ptr, size_t n)
{
    ft_memset(ptr, "\0", n);
}

/*
 * Copy first n bytes to destination, memory must not overlap,
 * if so, use memmove.
 */
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *) dest;
    unsigned char *s = (unsigned char *) src;
    while(n--){
        *d++ = *s++;
    }
    return (dest);
}

/*
 * Copy first n bytes to destination until c is found, otherwise
 * continues and return null.
 */
void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char *d = (unsigned char *) dest;
    unsigned char *s = (unsigned char *) src;
    while(n--){
        if((unsigned char)*s == (unsigned char)c){
            return s+1;
        }
        *d++ = *s++;
    }
    return (NULL);
}

/*
 * Copy first n bytes to destination. 
 * Memory may overlap, as though the bytes in src are first copied
 * in memory that does not overlap src or dest. 
 */
void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *srccpy = (unsigned char *)malloc(sizeof(unsigned char) * n);
    ft_memcpy(srccpy, src, n);
    ft_memcpy(dest, srccpy, n);
    return (dest);
}

/*
 * The  memchr()  function  scans  the  initial n bytes of the memory area
 * pointed to by s for the first instance of c.  Both c and the  bytes  of
 * the memory area pointed to by s are interpreted as unsigned char.
 */
void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *src = (unsigned char *) s;
    while(n--){
        if((unsigned char) *src == (unsigned char) c){ //Maybe broken missing pointer arithmetic (src++)
            return src;
        }
    }
    return (NULL);
}

/*
 * The  memcmp()  function compares the first n bytes (each interpreted as
 * unsigned char) of the memory areas s1 and s2.
 *  
 * The memcmp() function returns  an  integer  less  than,  equal  to,  or
 * greater than zero if the first n bytes of s1 is found, respectively, to
 * be less than, to match, or be greater than the first n bytes of s2 *  
 *  
 * For a nonzero return value, the sign is determined by the sign  of  the
 * difference  between  the  first  pair of bytes (interpreted as unsigned
 * char) that differ in s1 and s2
 * 
 * If n is zero, the return value is zero.
 * TODO: optimize like musl implementation
 */
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

/*
 *  The strlen() function calculates the length of the string pointed to by
 *  s, excluding the terminating null byte ('\0').
 */
size_t ft_strlen(const char *s)
{
    size_t len;
    for(len = 0; *s; s++, len++);
    return len;
}

/*
 * 
 */
size_t ft_strnlen(const char *s, size_t maxlen)
{
    size_t len;
    for(len = 0; len < maxlen; len++){
        if(!*s) break;
    }
    return len;
}
/*
 * The strlcpy() and strlcat() functions copy and 
 * concatenate strings respectively.
 * Note that a byte for the NULL should be included in size.
 * Android style
 */
size_t strlcpy(char *dst, const char *src, size_t size)
{
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
		while (*s++);
	}
    return(s - src - 1);	/* count does not include NUL */
}

/*
 * strlcat
 *
 */

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t srclen = ft_strlen(src);
    size_t dstlen = ft_strlen(dst);

}
