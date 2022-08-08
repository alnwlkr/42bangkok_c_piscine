/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:28:29 by panoma            #+#    #+#             */
/*   Updated: 2022/07/31 22:28:04 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	if (nb > 0)
	{
		result = result * nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	if (nb < 0)
		return (0);
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;
	
	i = 0;
	while (i <= 15)
	{
		j = ft_recursive_factorial(i);
		printf("the factorial of %d is %d\n", i, j);
		i++;
	}
	return (0);
}
*/
