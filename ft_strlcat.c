/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmese <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:40:28 by dpalmese          #+#    #+#             */
/*   Updated: 2024/01/08 12:43:46 by dpalmese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;	
	size_t	dstlen;
	size_t	maxlen;

	maxlen = dstsize - ft_strlen(dst) - 1;
	srclen = ft_strlen(src);
	dstlen = ft_strnlen(dst, dstsize);
    if (!dst || !src)
        return (0);
    if (dstsize == 0)
        return (unsigned int)(srclen);
	if (dstlen == dstsize)
		return (dstsize + srclen);
	if (srclen < dstsize - dstlen)
	{
		ft_memcpy(dst + dstlen, src, srclen + 1);
	}
	else
	{
		ft_memcpy(dst + dstlen, src, maxlen - 1);
		dst[dstlen + maxlen - 1] = '\0';
	}
	return (dstlen + srclen);
}
