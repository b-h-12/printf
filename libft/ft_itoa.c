/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 12:44:27 by bhamoum           #+#    #+#             */
/*   Updated: 2025/04/05 14:09:45 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	power_of_ten(int n)
{
	int	i;

	i = 0;
	while (n / 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*itoa_buffer(int n)
{
	char	*str;

	if (n >= 0)
		str = malloc(sizeof(char) * (power_of_ten(n) + 2));
	else
		str = malloc(sizeof(char) * (power_of_ten(n) + 3));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	str = NULL;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = power_of_ten(n);
	str = itoa_buffer(n);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		i++;
	}
	str[i + 1] = '\0';
	while (i >= 0 && str[i] != '-')
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	return (str);
}
