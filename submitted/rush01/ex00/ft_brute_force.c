/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_brute_force.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:08:16 by thmusik           #+#    #+#             */
/*   Updated: 2022/07/25 21:52:53 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "skyscraper.h"

void	ft_write_to_grid_row(int **grid, int row, int *all_possible_row)
{
	grid[row][0] = all_possible_row[1];
	grid[row][1] = all_possible_row[2];
	grid[row][2] = all_possible_row[3];
	grid[row][3] = all_possible_row[4];
}

int	ft_brute_force(int ln, int *inum, int **grid, int **all_possible)
{
	int	i;

	i = 0;
	while (i < 24)
	{
		ft_write_to_grid_row(grid, ln, all_possible[i]);
		if (ln < 3)
		{
			if (ft_brute_force(ln + 1, inum, grid, all_possible) == 1)
				return (1);
		}
		else if (ft_check_all(inum, grid) == 1)
			return (1);
		i++;
	}
	return (0);
}

int	ft_start_brute_force(int *inum, int **grid)
{
	int	**all_possible;
	int	result;
	int	i;

	all_possible = ft_get_possible_rows();
	result = ft_brute_force(0, inum, grid, all_possible);
	i = 0;
	while (i < 24)
	{
		free(all_possible[i]);
		i++;
	}
	free(all_possible);
	return (result);
}
