/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_format_hex_maj.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:16:20 by bhamoum           #+#    #+#             */
/*   Updated: 2025/04/16 18:18:40 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_format_hex_maj(va_list args)
{
	unsigned long	ul;

	ul = va_arg(args, unsigned long);
	ft_putnbr_hex_maj(ul);
	return ((ul / 16) + 1);
}