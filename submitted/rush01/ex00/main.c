/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:04:05 by panoma            #+#    #+#             */
/*   Updated: 2022/07/25 21:35:21 by pphengph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "skyscraper.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_ci(int *inum, char *str)
{
	int	i;
	int	numcount;
	int	numcheck;

	i = 0;
	numcount = 0;
	numcheck = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4' && numcheck == 0)
		{
			inum[numcount] = str[i] - '0';
			numcount++;
			numcheck = 1;
		}
		else if (str[i] == ' ')
			numcheck = 0;
		else
			return (0);
		i++;
	}
	if (numcount == 16)
		return (1);
	return (0);
}

int	**ft_memgrid(void)
{
	int	**grid;
	int	row;
	int	col;

	grid = (int **)malloc(sizeof(int *) * 4);
	row = 0;
	while (row < 4)
	{
		col = 0;
		grid[row] = (int *)malloc(sizeof(int) * 4);
		while (col < 4)
		{
			grid[row][col] = 0;
			col++;
		}
		row++;
	}
	return (grid);
}

void	ft_free(int **grid)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

int	main(int argc, char **argv)
{
	int	inum[16];
	int	**grid;

	if (argc != 2 || ft_strlen(argv[1]) != 31 || ft_ci(inum, argv[1]) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	grid = ft_memgrid();
	if (ft_start_brute_force(inum, grid) == 0)
		write(1, "Error\n", 6);
	else
		ft_putgrid(grid);
	ft_free(grid);
	return (0);
}
