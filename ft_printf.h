/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 14:12:34 by bhamoum           #+#    #+#             */
/*   Updated: 2025/04/05 18:46:40 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"

void	ft_putnbr_hex_min(unsigned long nbr);
void	ft_putnbr_hex_maj(unsigned long nbr);
void	ft_putnbr_hex_addr(unsigned long nbr);

#endif