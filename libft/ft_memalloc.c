/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:59:33 by tchewa            #+#    #+#             */
/*   Updated: 2019/06/08 12:32:42 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t *ptr;

	ptr = 0;
	ptr = malloc(size * sizeof(int));
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, size);
	return (ptr);
}
