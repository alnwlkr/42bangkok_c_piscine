/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:43:37 by panoma            #+#    #+#             */
/*   Updated: 2022/07/31 17:18:50 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	unsigned int	result;

	result = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{	
		result = result * nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 10));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(123, -1));
	return (0);
}
*/
