/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 14:11:32 by bhamoum           #+#    #+#             */
/*   Updated: 2025/04/05 16:36:36 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_format(char c, va_list args)
{
	int	i;
	void	*str;
	unsigned long	ul;
	
	i = 0;
	if (c == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		i++;
	}
	else if (c == 's')
	{
		str = ft_strdup(va_arg(args, char *));
		ft_putstr_fd(str, 1);
		i += ft_strlen(str);
		free(str);
	}
	else if (c == 'p')
	{
		ul = va_arg(args, unsigned long);
		ft_putnbr_hex_add(ul);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'd')
				ft_putnbr(va_arg(args, int));
			else if (format[i] == 's')
				ft_putstr(va_arg(args, char *));
			else if (format[i] == 'c')
				ft_putchar(va_arg(args, int));
			else if (format[i] == '%')
				ft_putchar('%');
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (i);
}