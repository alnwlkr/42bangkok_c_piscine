/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:21:09 by panoma            #+#    #+#             */
/*   Updated: 2022/07/21 16:36:12 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
	*div = a / b;
	*mod = a % b;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 10;
	b = 2;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);

	printf("Value of a is %d\n", a);
	printf("Value of b is %d\n", b);
}
*/
