/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 22:50:19 by tchewa            #+#    #+#             */
/*   Updated: 2019/07/05 23:13:29 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char			*ft_append_string(char *s1, char *s2)
{
	char	*temp;

	temp = ft_strjoin(s1, s2);
	free(s1);
	return (temp);
}

static	char		*ft_line_read(int fd, char *s)
{
	int		i;
	char	buff[BUFF_SIZE + 1];

	while (((i = read(fd, buff, BUFF_SIZE)) > 0))
	{
		buff[i] = '\0';
		s = ft_append_string(s, buff);
		if (ft_strchr(s, '\n') != NULL)
			break ;
	}
	return (s);
}

static char			*ft_new_line(char *s, char **line)
{
	char	*temp;
	int		i;

	i = 0;
	while (s[i] != '\n' && s[i] != '\0')
		i++;
	*line = ft_strsub(s, 0, i);
	if (ft_strcmp(*line, s) == 0)
		return (NULL);
	else
	{
		temp = ft_strsub(s, i + 1, (ft_strlen(s + i + 1)));
		free(s);
	}
	return (temp);
}

int					get_next_line(const int fd, char **line)
{
	static char	*s;

	if (!(*line) || fd < 0)
		return (-1);
	if (!s)
		s = ft_strnew(0);
	if (!(ft_strchr(s, '\n')))
		s = ft_line_read(fd, s);
	if (ft_strlen(s) == 0)
		return (0);
	s = ft_new_line(s, line);
	return (1);
}
