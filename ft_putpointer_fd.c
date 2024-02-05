/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmese <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:54:21 by dpalmese          #+#    #+#             */
/*   Updated: 2024/02/05 10:17:36 by rizz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// TODO: create a put hex
int	ft_putpointer_fd(void *p, int fd)
{
	uintptr_t			value;
	int					i;
	int					result;
	unsigned char		byte;

	i = (sizeof(void *) - 1) * 2;
	result = 0;
	value = (uintptr_t) p;
	result += ft_putstr_fd("0x", fd);
	while (i >= 0 && byte == 0)
	{
		i--;
		byte = (value >> (i * 4)) & 0xF;
	}
	while (i >= 0)
	{
		byte = (value >> (i * 4)) & 0xF;
		result += ft_putnbrbase_fd((long)byte, 16, 1);
		i--;
	}
	return (result);
}
