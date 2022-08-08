/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:37:04 by panoma            #+#    #+#             */
/*   Updated: 2022/07/25 21:47:19 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	ft_check_double(int **grid)
{
	int	row;
	int	col;
	int	sum_h;
	int	sum_v;

	row = 0;
	while (row < 4)
	{
		col = 0;
		sum_h = 0;
		sum_v = 0;
		while (col < 4)
		{
			sum_h = sum_h + grid[row][col];
			sum_v = sum_v + grid[col][row];
			col++;
		}
		if (sum_h != 10 || sum_v != 10)
			return (0);
		row++;
	}
	return (1);
}

int	ft_check_all(int *inum, int **grid)
{
	if (ft_check_grid_from_up(inum, grid) == 0)
		return (0);
	if (ft_check_grid_from_left(inum, grid) == 0)
		return (0);
	if (ft_check_grid_from_right(inum, grid) == 0)
		return (0);
	if (ft_check_grid_from_down(inum, grid) == 0)
		return (0);
	if (ft_check_double(grid) == 0)
		return (0);
	return (1);
}
