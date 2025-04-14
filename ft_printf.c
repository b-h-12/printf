/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 14:11:32 by bhamoum           #+#    #+#             */
/*   Updated: 2025/04/14 16:10:06 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_format(char c, va_list args)
{
	int	i;
	void	*str;
	unsigned long	ul;
	int	nb;
	unsigned int	u_nb;
	
	i = 0;
	if (c == 'c')
		i += put_format_char(args);
	else if (c == 's')
		i += put_format_str(args);
	else if (c == 'p')
		i += put_format_pointer(args);
	else if (c == 'd' || c == 'i')
	{
		i += put_format_dec(args);
	}
	else if (c == 'u')
		i += put_format_unsigned(args);
	else if (c == 'x')
	{
		ul = va_arg(args, unsigned long);
		ft_putnbr_hex_min(ul);
		i += ul / 16 + 1;
	}
	else if (c == 'X')
	{
		ul = va_arg(args, unsigned long);
		ft_putnbr_hex_maj(ul);
		i += ul / 16 + 1;
	}
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		i++;
	}
}

static int nb_arg(const char *format)
{
	int	i;
	int	count;

	if (!format)
		return NULL;
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, format);
	va_end(args);
	return (i);
}