/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:35:59 by tchewa            #+#    #+#             */
/*   Updated: 2019/06/11 14:51:02 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (!n)
	{
		return (0);
	}
	while (s1[i] && (s1[i] == s2[i] && --n))
	{
		s1++;
		s2++;
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
