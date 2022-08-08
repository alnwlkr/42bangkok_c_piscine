/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:00:36 by panoma            #+#    #+#             */
/*   Updated: 2022/07/21 18:47:48 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
		i++;
	}
}
/*
#include <stdio.h>

void    ft_putarr(int arr[], int size)
{
        for (int i = 0; i <= (size - 1); i++)
                printf("%d, ", arr[i]);
        printf("\n");
}

int     main(void)
{
        int     tab[] = {3, 1, 2, 4, 0, -1};
        int     size;

        size = 6;

        printf("Original: ");
        ft_putarr(tab, size);
        ft_sort_int_tab(tab, size);
        printf("Modified: ");
        ft_putarr(tab, size);
}
*/
