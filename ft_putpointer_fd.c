/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmese <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:54:21 by dpalmese          #+#    #+#             */
/*   Updated: 2024/02/04 17:54:32 by dpalmese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// TODO: create a put hex
int	ft_putpointer_fd(void *p, int fd)
{
	unsigned long int	value;
	int					i;
	int					result;
	unsigned char		byte;

	i = 8;
	result = 0;
	value = (unsigned long int) p;
	result += ft_putstr_fd("0x", fd);
	while (i >= 0)
	{
		byte = (value >> (i * 4)) & 0xF;
		result += ft_putnbrbase_fd(byte, 16, 1);
		i--;
	}
	return (result);
}
