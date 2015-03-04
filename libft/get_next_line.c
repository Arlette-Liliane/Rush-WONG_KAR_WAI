/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/06 20:18:22 by rbrathie          #+#    #+#             */
/*   Updated: 2015/02/10 12:29:38 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*n_check(char *buf, int len, ssize_t *pos)
{
	int		i;
	char	*ret;

	i = *pos;
	while (i < len)
	{
		if (buf[i] == '\n')
		{
			ret = ft_strsub((char const *)buf, *pos, (i - *pos));
			*pos = i + 1;
			return (ret);
		}
		i++;
	}
	return (buf);
}

int		cus_strlen(char *str, int max)
{
	int		i;

	i = 0;
	while (str[i] != '\0' && i < max)
		i++;
	return (i);
}

char	*cus_strcat(char *dst, char *src, int len)
{
	char	*save;
	size_t	i;
	int		j;

	if (dst == NULL)
		return (ft_strsub((char const *)src, 0, cus_strlen(src, len)));
	j = 0;
	save = dst;
	i = ft_strlen(dst);
	dst = malloc(sizeof(*dst) * (i + cus_strlen(src, len) + 1));
	ft_strcpy(dst, save);
	free(save);
	while (src[j] != '\0' && j < len)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

ssize_t	something_to_read(int const fd, char **line, ssize_t *pos, char *buf)
{
	ssize_t	search;
	char	*n_found;

	while ((search = read(fd, buf, BUFF_SIZE)) > 0)
	{
		*pos = 0;
		n_found = n_check(buf, search, pos);
		if (n_found != buf)
		{
			*line = cus_strcat(*line, n_found, search);
			free(n_found);
			return (search);
		}
		if (n_found == buf)
			*line = cus_strcat(*line, buf, search);
	}
	return (search);
}

int		get_next_line(int const fd, char **line)
{
	static ssize_t	search = 0;
	static char		buf[BUFF_SIZE];
	static ssize_t	pos = 0;

	if (!line)
		return (-1);
	*line = NULL;
	if (pos < search)
	{
		*line = n_check(buf, search, &pos);
		if (*line != buf)
			return (1);
		else
			*line = ft_strsub((char const *)buf, pos, search - pos);
	}
	search = something_to_read(fd, line, &pos, buf);
	if (search == -1)
		return (-1);
	if (search == 0 && *line == NULL)
		return (0);
	return (1);
}
