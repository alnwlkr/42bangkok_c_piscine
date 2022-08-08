/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:28:51 by panoma            #+#    #+#             */
/*   Updated: 2022/07/21 17:01:04 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	reminder;

	if (*b != 0)
	{
		result = (*a) / (*b);
		reminder = (*a) % (*b);
		*a = result;
		*b = reminder;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	*p_a;
	int	*p_b;

	a = 10;
	b = 2;
	p_a = &a;
	p_b = &b;
	printf(" a = %d", a);
	printf("\n b = %d", b);
	printf("\n -------");
	ft_ultimate_div_mod(p_a, p_b);
	printf("\n a = %d", a);
	printf("\n b = %d", b);
	printf("\n -------");
}
*/
