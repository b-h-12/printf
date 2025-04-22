/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_format_unsigned.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:45:24 by bhamoum           #+#    #+#             */
/*   Updated: 2025/04/22 16:49:15 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	put_nbr_unsigned_int(unsigned int n)
{
	if (n >= 10)
	{
		put_nbr_unsigned_int(n / 10);
		put_nbr_unsigned_int(n % 10);
	}
	else
	{
		char	c;

		c = n + '0';
		write(1, &c, 1);
	}
}

int	put_format_unsigned(va_list args)
{
	unsigned int	ui;
	int	len;
	char	c;

	ui = va_arg(args, unsigned int);
	c = '0';
	if (ui == 0)
	{
		write(1, &c, 1);
		return (1);
	}
	put_nbr_unsigned_int(ui);
	len = 0;
	while (ui != 0)
	{
		ui /= 10;
		len++;
	}
	return (len);
}
