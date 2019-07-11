/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 18:14:14 by tchewa            #+#    #+#             */
/*   Updated: 2019/07/09 13:35:15 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "get_next_line.h"
#include <stdlib.h>
#include <sys/wait.h>
#include <stdio.h>

int		main(void)
{
	//int			fd;
	char		*line;
	//int			ret;
	int 		fd2;
	int			i;

	/**fd = open("lorem.txt", O_RDONLY);
	while (get_next_line(fd, &line))
	{
		printf("return: |%d| \t line: |%s|\n", ret, line);
		ret++;
		free(line);
	}*/

	printf("Printing a Book");
	
	fd2 = open("bible.txt", O_RDONLY);
	while (get_next_line(fd2, &line))
	{
		printf("return: |%d| \t line: |%s|\n", i, line);
		i++;
		free(line);
	}
	
	return (0);
}
