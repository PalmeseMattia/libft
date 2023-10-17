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
        uint8_t* from = (uint8_t*) src;
        uint8_t* to = (uint8_t*) dest;

        if (from == to || n == 0)
                return dest;
        if (to > from && to-from < (int)n) {
                int i;
                for(i=n-1; i>=0; i--)
                        to[i] = from[i];
                return dest;
        }
        if (from > to && from-to < (int)n) {
                size_t i;
                for(i=0; i<n; i++)
                        to[i] = from[i];
                return dest;
        }
        ft_memcpy(dest, src, n);
        return dest;
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
        if((unsigned char) *src++ == (unsigned char) c){ 
            return src - 1;
        }
    }
    return (NULL);
}

/*
 * The  memrchr()  function  is like the memchr() function, except that it
 * searches backward from the end of the n bytes pointed to by  s  instead
 * of forward from the beginning.
 */
void *ft_memrchr(const void *s, int c, size_t n)
{
    unsigned char *src = (unsigned char *) s + n;
    while(n--){
        if((unsigned char) *src-- == (unsigned char) c){
            return src + 1;
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
 * The strlen() function calculates the length of the string pointed to by
 * s, excluding the terminating null byte ('\0').
 */
size_t ft_strlen(const char *s)
{
    size_t len;
    for(len = 0; *s; s++, len++);
    return len;
}

/*
 * The strnlen() function determines the length of a fixed-size string.
 * It returns strlen(s), if that is less than maxlen,  or  maxlen  if
 * there is no null terminating ('\0') among the first maxlen characters pointed to by s.
 */
size_t ft_strnlen(const char *s, size_t maxlen)
{
    size_t len;
    for(len = 0; len < maxlen; len++, s++){
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
size_t ft_strlcpy(char *dst, const char *src, size_t size)
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
 * append src to end of dst
 *
 */
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t maxlen= size - ft_strlen(dst) - 1;    /* Maximum number of characters we can append */
    size_t srclen = ft_strlen(src);
    size_t dstlen = ft_strnlen(dst, size); 
    if(dstlen == size) return size + srclen;        
    if(srclen < size - dstlen){    /* If the src fit inside size we memcpy */
        ft_memcpy(dst + dstlen, src, srclen + 1);
    } else {
        ft_memcpy(dst + dstlen, src, maxlen -1);
        dst[dstlen + maxlen - 1] = '\0';
    }
    return dstlen + srclen; 
}

/*
 * The  strchr()  function  returns a pointer to the first occurrence of the character c in
 * the string s.
 */
char *ft_strchr(const char *s, int c)
{
    return ft_memchr(s, c, ft_strlen(s));
}

/*
 * Like strchr() but in reverse
 */
char *ft_strrchr(const char *s, int c)
{
    return ft_memrchr(s, c, ft_strlen(s));
}

/*
 * The  strcmp()  function compares the two strings s1 and s2.  The locale
 * is not taken into account (for  a  locale-aware  comparison,  see  str‐
 * coll(3)).  The comparison is done using unsigned characters.
 */
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

/*
 * The atoi() function converts the initial portion of the string pointed to by nptr to int.
 */
int ft_atoi(const char *nptr)
{
    int result = 0;
	int sign = 1;
	while(*nptr){
	    if(*nptr == '-'){
			sign *= -1;
		} else if(*nptr >= '0' && *nptr <= '9'){
			result = result * 10 + (*nptr - '0');
		}
		nptr++;
	}
	return result * sign;
}

int ft_isupper(int c)
{
    return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}

int ft_islower(int c)
{
    return ((c >= 'a' && c <= 'z') ? 1 : 0);
}

int ft_isalpha(int c)
{
    return (ft_islower(c) || ft_isupper(c));
}

int ft_isdigit(int c)
{
    return ((c >= '0' && c <= '9') ? 1 : 0);
}

int ft_isalnum(int c)
{
    return (ft_isdigit(c) || ft_isalpha(c));
}

int ft_isascii(int c)
{
    return ((c >= 0 && c <= 127) ? 1 : 0);
}

int ft_isprint(int c)
{
    return ((c >= ' ' && c <= '~') ? 1 : 0);
}

int ft_toupper(int c)
{
    return ((c >= 'a' && c <= 'z') ? c - 32 : c);
}

int ft_tolower(int c)
{
    return ((c >= 'A' && c <= 'Z') ? c + 32 : c);
}

/*
 * The calloc() function allocates memory for an array of nmemb elements of 
 * size bytes each and returns a pointer to  the  allocated memory.  
 * The memory is set to zero.
 */
void *ft_calloc(size_t nmemb, size_t size)
{
    if(nmemb == 0 || size == 0){
        return NULL;
    } //Todo return error for integer overflow of nmemb * size
    void *p = malloc(nmemb * size);
    ft_bzero(p, nmemb);
    return p;
}

/*
 * The  strdup()  function returns a pointer to a new string which is a duplicate 
 * of the string s.  Memory for the new string is obtained with malloc(3), 
 * and can be freed with free(3).
 */
char *ft_strdup(const char *s)
{
    char *p = malloc(ft_strlen(s));
    ft_strlcpy(p,s, ft_strlen(s));
    return p;
}

int main(void)
{
    char src[] = "source";
    printf("%s\n", ft_strdup(src)); 
    return 0;
 //size_t strlcpy(char *dst, const char *src, size_t size)    
}

