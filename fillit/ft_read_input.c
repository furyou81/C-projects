/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wael-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 20:27:06 by wael-bou          #+#    #+#             */
/*   Updated: 2018/07/09 20:27:08 by wael-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"
#define BUF 1024 * 1024

static char	*ft_str_grow(char *str, char *buf, int size)
{
	char	*new_str;
	int		j;
	int		k;

	new_str = (char*)malloc(sizeof(*str) * (size + 1));
	if (new_str == NULL)
		return (NULL);
	j = 0;
	while (str[j])
	{
		new_str[j] = str[j];
		j++;
	}
	k = 0;
	while (buf[k])
		new_str[j++] = buf[k++];
	new_str[j] = '\0';
	free(str);
	return (new_str);
}

char		*ft_read_input(int fd)
{
	char	*str;
	char	buf[BUF];
	int		r;
	int		i;
	int		size;

	size = 0;
	i = 0;
	str = (char *)malloc(sizeof(*str) * 1);
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	r = read(fd, buf, BUF - 1);
	while (r > 0)
	{
		size = size + r;
		buf[r] = '\0';
		str = ft_str_grow(str, buf, size);
		if (str == NULL)
			return (NULL);
		r = read(fd, buf, BUF - 1);
	}
	return (str);
}
