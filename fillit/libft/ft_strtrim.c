/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 15:16:16 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/15 17:19:51 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	size_t	size;
	size_t	start;
	size_t	end;
	char	*new;

	if (s == NULL)
		return (NULL);
	size = ft_strlen(s);
	i = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
		i++;
	start = i;
	i = size - 1;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && i >= 0)
		i--;
	end = i + 1;
	if (end == 0)
		return (ft_strnew(1));
	new = (char*)malloc(sizeof(*new) * (end - start + 1));
	new = ft_strsub(s, start, end - start);
	if (new == NULL)
		return (NULL);
	return (new);
}
