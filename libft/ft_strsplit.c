/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 10:30:52 by tchewa            #+#    #+#             */
/*   Updated: 2019/06/27 14:51:51 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t		count_words(char const *s, char c)
{
	size_t	i;
	size_t	res;

	res = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		if (s[i])
		{
			res++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (res);
}

static	size_t		count_letters(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char				**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**str;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * count_words(s, c) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			str[j] = ft_strsub(s, i, count_letters(&s[i], c));
			j++;
			i = i + count_letters(&s[i], c);
		}
		while (s[i] && s[i] == c)
			i++;
	}
	str[j] = NULL;
	return (str);
}
