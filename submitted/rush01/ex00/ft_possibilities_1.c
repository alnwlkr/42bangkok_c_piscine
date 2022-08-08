/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_possibilities_1.c                                 :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:05:37 by thmusik           #+#    #+#             */
/*   Updated: 2022/07/25 21:24:36 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

void	ft_poss_p1(int **possibilities)
{
	possibilities[0][0] = 4;
	possibilities[0][1] = 1;
	possibilities[0][2] = 2;
	possibilities[0][3] = 3;
	possibilities[0][4] = 4;
	possibilities[0][5] = 1;
	possibilities[1][0] = 3;
	possibilities[1][1] = 1;
	possibilities[1][2] = 2;
	possibilities[1][3] = 4;
	possibilities[1][4] = 3;
	possibilities[1][5] = 2;
	possibilities[2][0] = 3;
	possibilities[2][1] = 2;
	possibilities[2][2] = 3;
	possibilities[2][3] = 4;
	possibilities[2][4] = 1;
	possibilities[2][5] = 2;
	possibilities[3][0] = 3;
	possibilities[3][1] = 1;
	possibilities[3][2] = 3;
	possibilities[3][3] = 4;
	possibilities[3][4] = 2;
	possibilities[3][5] = 2;
}

void	ft_poss_p2(int **possibilities)
{
	possibilities[4][0] = 3;
	possibilities[4][1] = 2;
	possibilities[4][2] = 1;
	possibilities[4][3] = 3;
	possibilities[4][4] = 4;
	possibilities[4][5] = 1;
	possibilities[5][0] = 3;
	possibilities[5][1] = 2;
	possibilities[5][2] = 3;
	possibilities[5][3] = 1;
	possibilities[5][4] = 4;
	possibilities[5][5] = 1;
	possibilities[6][0] = 3;
	possibilities[6][1] = 1;
	possibilities[6][2] = 3;
	possibilities[6][3] = 2;
	possibilities[6][4] = 4;
	possibilities[6][5] = 1;
	possibilities[7][0] = 2;
	possibilities[7][1] = 2;
	possibilities[7][2] = 1;
	possibilities[7][3] = 4;
	possibilities[7][4] = 3;
	possibilities[7][5] = 2;
}

void	ft_poss_p3(int **possibilities)
{
	possibilities[8][0] = 2;
	possibilities[8][1] = 3;
	possibilities[8][2] = 4;
	possibilities[8][3] = 1;
	possibilities[8][4] = 2;
	possibilities[8][5] = 2;
	possibilities[9][0] = 2;
	possibilities[9][1] = 3;
	possibilities[9][2] = 1;
	possibilities[9][3] = 4;
	possibilities[9][4] = 2;
	possibilities[9][5] = 2;
	possibilities[10][0] = 2;
	possibilities[10][1] = 2;
	possibilities[10][2] = 4;
	possibilities[10][3] = 1;
	possibilities[10][4] = 3;
	possibilities[10][5] = 2;
	possibilities[11][0] = 2;
	possibilities[11][1] = 3;
	possibilities[11][2] = 2;
	possibilities[11][3] = 4;
	possibilities[11][4] = 1;
	possibilities[11][5] = 2;
}
