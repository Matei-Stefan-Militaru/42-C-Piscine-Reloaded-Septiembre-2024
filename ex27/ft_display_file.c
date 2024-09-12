/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:54:47 by mmilitar          #+#    #+#             */
/*   Updated: 2024/09/09 19:54:50 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUF_SIZE 1024

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	display_error(char *message)
{
	ft_putstr(message);
}

int	open_file(char *filename)
{
	return (open(filename, O_RDONLY));
}

void	read_and_display(int fd)
{
	char	buf[BUF_SIZE];
	int		bytes_read;

	while (1)
	{
		bytes_read = read(fd, buf, BUF_SIZE);
		if (bytes_read < 0)
		{
			display_error("Cannot read file.\n");
			close(fd);
			return ;
		}
		else if (bytes_read == 0)
			break ;
		write(1, buf, bytes_read);
	}
}

int	main(int argc, char **argv)
{
	int		fd;

	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		display_error("Cannot read file.\n");
		return (1);
	}
	read_and_display(fd);
	close(fd);
	return (0);
}
