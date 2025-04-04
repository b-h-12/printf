/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:10:28 by bhamoum           #+#    #+#             */
/*   Updated: 2025/04/04 19:20:07 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*allocate_word(const char *s, char c, int *i)
{
	int		start;
	int		len;
	char	*word;

	while (s[*i] == c)
		(*i)++;
	start = *i;
	len = 0;
	while (s[*i] && s[*i] != c)
	{
		(*i)++;
		len++;
	}
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, &s[start], len + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (j < words)
	{
		result[j] = allocate_word(s, c, &i);
		if (!result[j++])
			return (NULL);
	}
	result[j] = NULL;
	return (result);
}
