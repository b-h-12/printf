/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_format_dec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:40:39 by bhamoum           #+#    #+#             */
/*   Updated: 2025/04/22 16:21:36 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_format_dec(va_list args)
{
	int	nb;
	int	len;
	int	negative;

	nb = va_arg(args, int);
	len = 0;
	ft_putnbr_fd(nb, 1);
	if (nb == 0)
		return (1);
	if (nb < 0)
		negative = 1;
	else
		negative = 0;
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len + negative);
}
