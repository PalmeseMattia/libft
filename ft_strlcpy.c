/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmese <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:44:10 by dpalmese          #+#    #+#             */
/*   Updated: 2024/01/08 12:48:18 by dpalmese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
 * The strlcpy() and strlcat() functions copy and 
 * concatenate strings respectively.
 * Note that a byte for the NULL should be included in size.
 * Android style
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char		*s = src;
	unsigned char	*d;
	size_t			n;

	d = (unsigned char *)dst;
	n = size;
	while (n--)
	{
		*d = *s;
		if (*d  == '\0')
			break;
		d++;
		s++;
	}
	if (n == 0)
	{
		if (size != 0)
			*d = '\0';
		while (*s++);
	}
	return (s - src - 1);
}
