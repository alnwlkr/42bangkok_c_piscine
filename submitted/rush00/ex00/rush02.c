/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:45:03 by okarnjan          #+#    #+#             */
/*   Updated: 2022/07/17 15:03:31 by okarnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int length, char start, char middle, char end)
{
	int	width;

	width = 1;
	while (width <= length)
	{
		if (width == 1)
			ft_putchar(start);
		else if (width == length)
			ft_putchar(end);
		else
			ft_putchar(middle);
		width++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	height;

	height = 1;
	if (x >= 1 && y >= 1)
	{
		while (height <= y)
		{
			if (height == 1)
				ft_print(x, 'A', 'B', 'A');
			else if (height == y)
				ft_print(x, 'C', 'B', 'C');
			else
				ft_print(x, 'B', ' ', 'B');
			height++;
		}
	}
}
