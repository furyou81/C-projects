/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:30:08 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/08 21:03:35 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include "../includes/ft_headers.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	buf[1024 * 1024];

	if (argc == 1)
		ft_putstrout("File name missing.\n", 2);
	else if (argc != 2)
		ft_putstrout("Too many arguments.\n", 2);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd != -1)
		{
			read(fd, buf, 1024 * 1024 - 1);
			ft_putstrout(buf, 1);
		}
		close(fd);
	}
	return (0);
}
