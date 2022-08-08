/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sub_check_grid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:55:32 by panoma            #+#    #+#             */
/*   Updated: 2022/07/25 16:14:20 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_grid_from_up(int *inum, int **grid)
{
	int	x;
	int	y;
	int	visible;
	int	highest_found;

	y = 0;
	while (y < 4)
	{
		x = 0;
		visible = 1;
		highest_found = grid[0][y];
		while (x < 3)
		{
			if (grid[x][y] > highest_found)
				highest_found = grid[x][y];
			if (highest_found < grid[x + 1][y])
				visible++;
			x++;
		}
		if (visible != inum[y])
			return (0);
		y++;
	}
	return (1);
}

int	ft_check_grid_from_left(int *inum, int **grid)
{
	int	x;
	int	y;
	int	visible;
	int	highest_found;

	x = 0;
	while (x < 4)
	{
		y = 0;
		visible = 1;
		highest_found = grid[x][0];
		while (y < 3)
		{
			if (grid[x][y] > highest_found)
				highest_found = grid[x][y];
			if (highest_found < grid[x][y + 1])
				visible++;
			y++;
		}
		if (visible != inum[x + 8])
			return (0);
		x++;
	}
	return (1);
}

int	ft_check_grid_from_right(int *inum, int **grid)
{
	int	x;
	int	y;
	int	visible;
	int	highest_found;

	x = 0;
	while (x < 4)
	{
		y = 3;
		visible = 1;
		highest_found = grid[x][3];
		while (y > 0)
		{
			if (grid[x][y] > highest_found)
				highest_found = grid[x][y];
			if (highest_found < grid[x][y - 1])
				visible++;
			y--;
		}
		if (visible != inum[x + 12])
			return (0);
		x++;
	}
	return (1);
}

int	ft_check_grid_from_down(int *inum, int **grid)
{
	int	x;
	int	y;
	int	visible;
	int	highest_found;

	y = 0;
	while (y < 4)
	{
		x = 3;
		visible = 1;
		highest_found = grid[3][y];
		while (x > 0)
		{
			if (grid[x][y] > highest_found)
				highest_found = grid[x][y];
			if (highest_found < grid[x - 1][y])
				visible++;
			x--;
		}
		if (visible != inum[y + 4])
			return (0);
		y++;
	}
	return (1);
}
