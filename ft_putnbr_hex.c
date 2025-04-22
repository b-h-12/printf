/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 16:22:03 by bhamoum           #+#    #+#             */
/*   Updated: 2025/04/22 15:05:24 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_length(unsigned long nbr)
{
	int	len;
	
	if (nbr == 0)
		return (1);
	len = 0;
	while (nbr > 0)
	{
		nbr /= 16;
		len ++;
	}
	return (len);
}

int	ft_putnbr_hex_min(unsigned long nbr)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_putnbr_hex_min(nbr / 16);
		ft_putnbr_hex_min(nbr % 16);
	}
	else
	{
		write(1, &base[nbr], 1);
	}
	return (hex_length(nbr));
}

int	ft_putnbr_hex_maj(unsigned long nbr)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		ft_putnbr_hex_maj(nbr / 16);
		ft_putnbr_hex_maj(nbr % 16);
	}
	else
	{
		write(1, &base[nbr], 1);
	}
	return (hex_length(nbr));
}

int	ft_putnbr_hex_addr(unsigned long nbr)
{
	ft_putstr_fd("0x", 1);
	ft_putnbr_hex_min(nbr);
	return (hex_length(nbr) + 2 );
}

