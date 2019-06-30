/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:00:12 by tchewa            #+#    #+#             */
/*   Updated: 2019/06/27 15:00:23 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *str1, const char *str2, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str1[i] && i < size)
		i++;
	while (str2[j] && (i + j + 1) < size)
	{
		str1[i + j] = str2[j];
		j++;
	}
	if (i != size)
		str1[i + j] = '\0';
	return (i + ft_strlen(str2));
}
