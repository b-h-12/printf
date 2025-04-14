/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_format_dec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:40:39 by bhamoum           #+#    #+#             */
/*   Updated: 2025/04/14 15:44:07 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_format_dec(va_list args)
{
	int	nb;

	nb = va_arg(args, int);
	ft_putnbr_fd(nb, 1);
	return ((nb / 10) + 1);
}