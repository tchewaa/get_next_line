/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:49:07 by tchewa            #+#    #+#             */
/*   Updated: 2019/06/14 21:58:10 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ssrc;
	unsigned char		*sdest;

	ssrc = (unsigned char *)src;
	sdest = (unsigned char *)dest;
	i = 0;
	if (n == 0 || sdest == ssrc)
		return (sdest);
	while (i < n)
	{
		sdest[i] = ssrc[i];
		i++;
	}
	return (sdest);
}
