/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:47:43 by panoma            #+#    #+#             */
/*   Updated: 2022/07/31 23:03:29 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	nbr;

	nbr = nb;
	if (nbr <= 0)
	{
		return (0);
	}
	if (nbr == 1)
	{
		return (1);
	}
	i = 2;
	if (nbr >= 2)
	{
		while (i * i <= nbr)
		{
			if (i * i == nbr)
				return (i);
			i++;
		}
	}
	return (0);
}
/*
int    main(void)
{
	printf("sqrt of %d is %d\n", -2282, ft_sqrt(-2282));
	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
	return (0);
}
*/
