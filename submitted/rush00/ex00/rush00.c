/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 01:50:36 by panoma            #+#    #+#             */
/*   Updated: 2022/07/17 15:01:22 by okarnjan         ###   ########.fr       */
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
				ft_print(x, 'o', '-', 'o');
			else if (height == y)
				ft_print(x, 'o', '-', 'o');
			else
				ft_print(x, '|', ' ', '|');
			height++;
		}
	}
}
