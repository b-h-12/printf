/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_format_hex_min.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:13:58 by bhamoum           #+#    #+#             */
/*   Updated: 2025/04/16 18:18:49 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_format_hex_min(va_list args)
{
	unsigned long	ul;
	
	ul = va_arg(args, unsigned long);
	ft_putnbr_hex_min(ul);
	return ((ul / 16) + 1);
}