/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphengph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:41:30 by pphengph          #+#    #+#             */
/*   Updated: 2022/07/25 21:35:50 by pphengph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKYSCRAPER_H
# define SKYSCRAPER_H

void	ft_putgrid(int **grid);
int		ft_start_brute_force(int *inum, int **grid);
int		**ft_get_possible_rows(void);
void	ft_poss_p1(int **possibilities);
void	ft_poss_p2(int **possibilities);
void	ft_poss_p3(int **possibilities);
void	ft_poss_p4(int **possibilities);
void	ft_poss_p5(int **possibilities);
void	ft_poss_p6(int **possibilities);
int		ft_check_all(int *inum, int **grid);
int		ft_check_grid_from_up(int *inum, int **grid);
int		ft_check_grid_from_left(int *inum, int **grid);
int		ft_check_grid_from_right(int *inum, int **grid);
int		ft_check_grid_from_down(int *inum, int **grid);
#endif
