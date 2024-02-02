/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmese <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:30:24 by dpalmese          #+#    #+#             */
/*   Updated: 2024/01/21 16:31:02 by dpalmese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_putstr_fd(char *s, int fd)
{
	int	size;

	if (fd < 0)
		return (0);
	size = ft_strlen(s);
	return (write(fd, s, size));
}
