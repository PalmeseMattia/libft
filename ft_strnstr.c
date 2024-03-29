/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmese <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:29:29 by dpalmese          #+#    #+#             */
/*   Updated: 2024/01/30 15:31:13 by dpalmese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *s, const char *to_find, size_t len)
{
	size_t	j;

	if (!*to_find)
		return ((char *)s);
	if (!len || !*s)
		return (NULL);
	while (*s && len > 0)
	{
		if (*s == *to_find)
		{
			j = 0;
			while (j < len && to_find[j] && s[j] == to_find[j])
				j++;
			if (to_find[j] == '\0')
				return ((char *)s);
		}
		s++;
		len--;
	}
	return (0);
}
