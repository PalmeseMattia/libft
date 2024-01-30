/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmese <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:39:23 by dpalmese          #+#    #+#             */
/*   Updated: 2024/01/23 10:39:27 by dpalmese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*src;
	char	*result;

	src = (char *)s + start;
	result = malloc(sizeof(char) * len);
	ft_strlcpy(result, src, len + 1);
	return (result);
}
