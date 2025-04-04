/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 12:52:41 by bhamoum           #+#    #+#             */
/*   Updated: 2025/03/31 12:56:43 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (str1 < str2)
	{
		while (n-- && str1 && str2)
			*str1++ = *str2++;
	}
	else
	{
		str1 += n;
		str2 += n;
		while (n-- && str1 && str2)
			*--str1 = *--str2;
	}
	return (dst);
}
