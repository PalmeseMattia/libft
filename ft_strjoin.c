/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmese <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:13:09 by dpalmese          #+#    #+#             */
/*   Updated: 2024/01/19 11:13:51 by dpalmese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin( const char *s1, const char *s2)
{
    int size_s1;
    int size_s2;

    size_s1 = ft_strlen(s1);
    size_s2 = ft_strlen(s2);
    char *result = malloc(sizeof(char) * (size_s1 + size_s2) + 1);
    if(!result)
        return (NULL);
    ft_strncpy(result, s1, size_s1);
    ft_strncpy(result + size_s1 + 1, s2, size_s2);
    //TODO: strlcpy
    return (result);
}
