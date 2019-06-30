/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:19:36 by tchewa            #+#    #+#             */
/*   Updated: 2019/06/13 11:53:26 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *mdest;
	unsigned char *msrc;

	mdest = (unsigned char *)dest;
	msrc = (unsigned char *)src;
	if (n == 0)
		return (mdest);
	if (mdest > msrc)
		while (n--)
			mdest[n] = msrc[n];
	else
		ft_memcpy(mdest, msrc, n);
	return (dest);
}
