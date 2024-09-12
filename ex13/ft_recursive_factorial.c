/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:14:58 by mmilitar          #+#    #+#             */
/*   Updated: 2024/08/15 17:18:19 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 15)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main() {
    int number = 5; // Example number
    int result = ft_recursive_factorial(number);
    
    if (result != 0) {
        printf("Factorial of %d is %d\n", number, result);
    } else {
        printf("Invalid input or overflow\n");
    }
    
    return 0;
}
*/
