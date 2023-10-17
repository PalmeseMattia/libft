#include "libft.h"

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