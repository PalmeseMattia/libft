/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmese <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:28:29 by dpalmese          #+#    #+#             */
/*   Updated: 2024/01/08 11:28:32 by dpalmese         ###   ########.fr       */
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

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	ft_bzero(p, nmemb);
	return (p);
}
