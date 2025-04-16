/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 16:22:03 by bhamoum           #+#    #+#             */
/*   Updated: 2025/04/16 18:01:08 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex_min(unsigned long nbr, int size)
{
	char		*base;

	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_putnbr_hex_min(nbr / 16, size);
		ft_putnbr_hex_min(nbr % 16, size);
	}
	else
	{
		write(1, &base[nbr], 1);
		size++;
	}
	return (size);
}

int	ft_putnbr_hex_maj(unsigned long nbr, int size)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		ft_putnbr_hex_maj(nbr / 16, size);
		ft_putnbr_hex_maj(nbr % 16, size);
	}
	else
	{
		write(1, &base[nbr], 1);
		size++;
	}
	return (size);
}

int	ft_putnbr_hex_addr(unsigned long nbr)
{
	ft_putstr_fd("0x", 1);
	return (ft_putnbr_hex_min(nbr, 0) + 2);
}
