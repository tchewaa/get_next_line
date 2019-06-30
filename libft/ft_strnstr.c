/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:22:53 by tchewa            #+#    #+#             */
/*   Updated: 2019/06/20 16:47:02 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t strlen;

	i = 0;
	strlen = ft_strlen(needle);
	if (strlen == 0)
		return ((char *)&haystack[i]);
	if (len == 0)
		return (NULL);
	if (needle[i] == '\0')
		return ((char *)&haystack[i]);
	while (haystack[i] && (i < len))
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i < len)
		{
			if (strlen - 1 == j)
				return ((char *)&haystack[i]);
			j++;
			len--;
		}
		i++;
	}
	return (NULL);
}
