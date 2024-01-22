/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmese <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:28:29 by dpalmese          #+#    #+#             */
/*   Updated: 2024/01/21 11:44:39 by dpalmese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * The calloc() function allocates memory for an array of nmemb elements of
 * size bytes each and returns a pointer to  the  allocated memory.
 * The memory is set to zero.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	bytes,

	bytes = nmemb * size;
	if (nmemb == 0 || size == 0)
	{
		ft_calloc(1,1);
	}
	if (bytes / size != nmemb)
		return (NULL);
	p = malloc(bytes);
	if (!p)
		return (NULL);
	ft_bzero(p, bytes);
	return (p);
}
