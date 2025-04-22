/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_format_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:36:29 by bhamoum           #+#    #+#             */
/*   Updated: 2025/04/22 15:15:10 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_format_pointer(va_list args)
{
	unsigned long	ul;

	ul = va_arg(args, unsigned long);
	return (ft_putnbr_hex_addr(ul));
}