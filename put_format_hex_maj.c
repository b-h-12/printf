/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_format_hex_maj.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:16:20 by bhamoum           #+#    #+#             */
/*   Updated: 2025/04/22 17:01:40 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_format_hex_maj(va_list args)
{
	unsigned int	ui;
	
	ui = va_arg(args, unsigned int);
	return (ft_putnbr_hex_maj(ui));
}
