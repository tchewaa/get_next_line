/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:25:35 by tchewa            #+#    #+#             */
/*   Updated: 2019/06/15 04:12:37 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*str;
	char		*s1;
	int			i;

	i = 0;
	s1 = (char *)s;
	str = NULL;
	while (s1[i] != '\0')
	{
		if (s1[i] == c)
			str = s1 + i;
		i++;
	}
	if (s1[i] == c)
		return ((char *)s1 + i);
	return ((char *)str);
}
