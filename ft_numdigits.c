/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numdigits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmese <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:00:54 by dpalmese          #+#    #+#             */
/*   Updated: 2024/01/19 12:00:57 by dpalmese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_numdigits(int n)
{
	if (n < 0)
	{
		if (n == INT_MIN)
			return (ft_numdigits(INT_MAX));
		else
			return (ft_numdigits(-n));
	}
	if (n < 10)
		return (1);
	return (1 + ft_numdigits (n / 10));
}
