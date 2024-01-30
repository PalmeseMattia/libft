/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmese <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:29:29 by dpalmese          #+#    #+#             */
/*   Updated: 2024/01/19 19:29:32 by dpalmese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		needle_len;

	if (len == 0)
		return (0);
	needle_len = ft_strnlen(needle, len);
	if (needle_len == 0)
		return ((char *)haystack);
	i = 0;
	while (i <= len - needle_len && *haystack)
	{
		if (*haystack == *needle && !ft_strncmp(haystack, needle, needle_len))
			return ((char *)haystack);
		i++;
		haystack++;
	}
	return (NULL);
}
