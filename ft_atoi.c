#include "libft.h"

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