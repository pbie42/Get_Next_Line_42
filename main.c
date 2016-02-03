/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgeslin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 14:19:17 by jgeslin           #+#    #+#             */
/*   Updated: 2016/02/03 17:29:38 by pbie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "get_next_line.h"
#include "libft/includes/libft.h"

int		main()
{
	int		fd;
//	int		fd1;
//	int		fd2;
	int		i;
	int		c;
	char	*line;

	fd = open("get_next_line.c", O_RDONLY);
//	fd1 = open("main.c", O_RDONLY);
//	fd2 = open("get_next_line.h", O_RDONLY);
//	fd = 0;
	i = 0;
	c = 0;

	
/*	i = get_next_line(fd, &line);
	ft_putstr(line);
	while ((i = get_next_line(fd1, &line)) != 0)
	{
//		c = c + i;
	//	printf("[%d] %s\n", c, line);
//		printf("%s\n", line);
	}
	close(fd1);
	while ((i = get_next_line(fd2, &line)) != 0)
	{
		c = c + i;
		printf("[%d] %s\n", c, line);
	}
	fd1 = open("auteur", O_RDONLY);
	while ((i = get_next_line(fd1, &line)) != 0)
	{
		c = c + i;
		printf("[%d] %s\n", c, line);
	}
	close(fd2);
*/	while ((i = get_next_line(fd, &line)) > 0)
	{
//		c = c + i;
		printf("%d\n%s\n", i, line);
	}
	close(fd);
	printf("%d\n%s\n", i, line);
/*	close(fd1);
	fd = open("get_next_line.c", O_RDONLY);
	while ((i = get_next_line(fd, &line)) != 0)
	{
		c = c + i;
		printf("[%d] %s\n", c, line);
	}
	close(fd);
*/

//	ft_putnbr(i);
//	c = get_next_line(fd, &line);
//	ft_putnbr(c);
//	printf("%d", get_next_line(fd, &line));
	//free(line);
	//close(fd);
	return (0);
}
