/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_possibilities.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:06:41 by thmusik           #+#    #+#             */
/*   Updated: 2022/07/25 21:48:40 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "skyscraper.h"

int	**ft_get_possible_rows(void)
{
	int	i;
	int	**possibilities;

	i = 0;
	possibilities = (int **)malloc(sizeof(int *) * 24);
	while (i < 24)
	{
		possibilities[i] = (int *)malloc(sizeof(int) * 6);
		i++;
	}
	ft_poss_p1(possibilities);
	ft_poss_p2(possibilities);
	ft_poss_p3(possibilities);
	ft_poss_p4(possibilities);
	ft_poss_p5(possibilities);
	ft_poss_p6(possibilities);
	return (possibilities);
}
