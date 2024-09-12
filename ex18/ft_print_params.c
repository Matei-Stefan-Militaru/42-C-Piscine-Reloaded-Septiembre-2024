/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:52:58 by mmilitar          #+#    #+#             */
/*   Updated: 2024/08/17 16:17:07 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	len;
	int	i;
	int	j;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			len = 0;
			while (argv[i][len] != '\0')
				len++;
			j = 0;
			while (j < len)
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
