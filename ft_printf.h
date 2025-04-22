/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 14:12:34 by bhamoum           #+#    #+#             */
/*   Updated: 2025/04/22 17:02:57 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"

int	ft_putnbr_hex_min(unsigned int nbr);
int	ft_putnbr_hex_maj(unsigned int nbr);
int	ft_putnbr_hex_addr(unsigned long nbr);
int	put_format_char(va_list args);
int	put_format_str(va_list args);
int	put_format_pointer(va_list args);
int	put_format_dec(va_list args);
int	put_format_unsigned(va_list args);
int	put_format_hex_min(va_list args);
int	put_format_hex_maj(va_list args);
int	ft_printf(const char *format, ...);

#endif