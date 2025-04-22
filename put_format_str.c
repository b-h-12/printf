/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_format_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:30:20 by bhamoum           #+#    #+#             */
/*   Updated: 2025/04/22 18:05:12 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_format_str(va_list args)
{
	int		r;
	char	*str;
	
	
	str = ft_strdup(va_arg(args, char *));
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	ft_putstr_fd(str, 1);
	r = ft_strlen(str);
	free(str);
	return (r);
}