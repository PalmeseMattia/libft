/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmese <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:23:22 by dpalmese          #+#    #+#             */
/*   Updated: 2024/01/08 10:26:26 by dpalmese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
 * The atoi() function converts the initial portion of the string pointed to 
 * bynptr to int.
 */
int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*nptr)
	{
		if (*nptr == '-')
		{
			sign *= -1;
		}
		else if (*nptr >= '0' && *nptr <= '9')
		{
			result = result * 10 + (*nptr - '0');
		}
		nptr++;
	}
	return (result * sign);
}
