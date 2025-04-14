/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_format_unsigned.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:45:24 by bhamoum           #+#    #+#             */
/*   Updated: 2025/04/14 15:46:41 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_format_unsigned(va_list args)
{
	unsigned int	u_nb;

	u_nb = va_arg(args, unsigned int);
		if (u_nb > INT_MAX)
		{
			ft_putnbr_fd(u_nb / 10, 1);
			ft_putnbr_fd(u_nb % 10, 1);
		}
		else
			ft_putnbr_fd(u_nb, 1);
	return ((u_nb / 10) + 1);
}