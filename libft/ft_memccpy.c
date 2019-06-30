/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:32:38 by tchewa            #+#    #+#             */
/*   Updated: 2019/06/15 00:14:55 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*mdest;
	unsigned char			*msrc;

	i = 0;
	msrc = (unsigned char *)src;
	mdest = (unsigned char *)dest;
	while (i < n)
	{
		mdest[i] = msrc[i];
		if (mdest[i] == (unsigned char)c)
			return (mdest + i + 1);
		i++;
	}
	return (NULL);
}
