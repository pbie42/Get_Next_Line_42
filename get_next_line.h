/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 15:08:22 by pbie              #+#    #+#             */
/*   Updated: 2016/02/01 17:13:24 by pbie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 5

# include <fcntl.h>
# include <unistd.h>
# include "libft/includes/libft.h"

typedef struct		s_fd
{
	int				fd;
	char			*str;
}					t_fd;

typedef struct		s_lst_fd
{
	t_fd			*data;
	struct s_lst_fd	*next;
}					t_lst_fd;

int					get_next_line(int const fd, char **line);

#endif
