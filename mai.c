/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mai.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfortin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 16:49:13 by jfortin           #+#    #+#             */
/*   Updated: 2016/01/29 17:09:56 by jfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

int		main()
{
	char *line;
	
	int fd = open("mai.c", O_RDONLY);

	while (get_next_line(fd, &line) == 1)
		ft_putendl(line);
	close(fd);
	return (0);
}
