#include "libft.h"

/**
 * Measure, allocate and write :)
*/

int numPlaces (int n) {
    if (n < 0){
        if (n == INT_MIN)
            return numPlaces(INT_MAX);
        else
            return numPlaces(-n);
    }
    if (n < 10) 
        return 1;
    return 1 + numPlaces (n / 10);
}

char *ft_itoa(int n)
{
    char *result;
    int size = numPlaces(n);

    result = malloc(size);
    if(!result)
        return (NULL);
    
}