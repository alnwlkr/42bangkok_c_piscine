/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 23:35:04 by panoma            #+#    #+#             */
/*   Updated: 2022/08/01 18:05:10 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("1 stands for nb is prime number, 0 stands for not\n");
	printf("Is %d is prime => %d\n", 7853, ft_is_prime(7853));
	printf("Is %d is prime => %d\n", 2147483647, ft_is_prime(2147483647));
	printf("Is %d is prime => %d\n", 78989, ft_is_prime(78989));
	return (0);
}
*/
