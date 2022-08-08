/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:11:14 by panoma            #+#    #+#             */
/*   Updated: 2022/07/21 17:59:07 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	last;
	int	temp;

	first = 0;
	last = size - 1;
	while (first < last)
	{
		temp = tab[first];
		tab[first] = tab[last];
		tab[last] = temp;
		first++;
		last--;
	}
}
/*
#include <stdio.h>

void	ft_putarr(int arr[], int size)
{
	for (int i = 0; i <= (size - 1); i++)
		printf("%d, ", arr[i]);
	printf("\n");
}

int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4};
	int	size;

	size = 5;

	printf("Original: ");
	ft_putarr(tab, size);
	ft_rev_int_tab(tab, size);
	printf("Modified: ");
	ft_putarr(tab, size);
}
*/
