/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 15:02:39 by pbie              #+#    #+#             */
/*   Updated: 2016/01/29 18:24:47 by pbie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/includes/libft.h"
#include <unistd.h>

/*char			*ft_strnjoin(char const *s1, char const *s2, size_t n)
{
	size_t		i;
	int			j;
	size_t		*str;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + n + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != 0 && j < n)
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}*/

int				get_next_line(int const fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	int			ret;
	char		*c;
	static char	*tmp = "";

	ret = 1;
	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
	while ((c = ft_strchr(tmp, '\n')) == NULL && ret)
	{
		ret = read(fd, buf, BUFF_SIZE);
		buf[ret] = '\0';
		if ((tmp = ft_strjoin(tmp, buf)) == NULL)
			return (-1);
	}
	if (c)
	{
		*line = ft_strndup(tmp, c - tmp);
		tmp = tmp + (c - tmp + 1);
	}
	else
		*line = ft_strdup(tmp);
	if (ret == 0)
		return (0);
	return (1);
}
