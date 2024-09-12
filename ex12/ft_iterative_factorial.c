/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:19:05 by mmilitar          #+#    #+#             */
/*   Updated: 2024/08/15 13:28:01 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
		return (1);
	i = 2;
	result = 1;
	while (i <= nb)
	{
		if (result > (2147483647 / i))
			return (0);
		result *= i;
		i++;
	}
	return (result);
}
/*
int main(void)
{
    int a = 4;
    int factorial = ft_iterative_factorial(a);
    printf("Factorial of %d is %d\n", a, factorial);
    return 0;
}
*/
