/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putgrid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 21:31:49 by panoma            #+#    #+#             */
/*   Updated: 2022/07/24 21:39:53 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putgrid(int **grid)
{
	int	c;
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < 4)
	{
		while (col < 4)
		{
			c = grid[row][col] + '0';
			write(1, &c, 1);
			if (col < 3)
				write(1, " ", 1);
			col++;
		}
		row++;
		write(1, "\n", 1);
		col = 0;
	}
}
