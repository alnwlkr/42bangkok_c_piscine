/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:25:20 by panoma            #+#    #+#             */
/*   Updated: 2022/08/02 21:30:41 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>
int	main(void)
{
	int	a = 999;
	int	b = 888;
	int	*ptr_a = &a;
	int	*ptr_b = &b;
	
	ft_swap(ptr_a, ptr_b);
	printf("a = %d b = %d", a, b);
	return(0);
}
