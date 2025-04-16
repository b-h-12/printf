/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_format_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:36:29 by bhamoum           #+#    #+#             */
/*   Updated: 2025/04/16 17:36:29 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_format_pointer(va_list args)
{
	long	l;

	l = va_arg(args, long);
	if (l == 0)
		return (0);
	return (ft_putnbr_hex_addr(l));
}