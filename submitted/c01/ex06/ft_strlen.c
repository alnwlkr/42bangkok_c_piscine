/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:01:38 by panoma            #+#    #+#             */
/*   Updated: 2022/07/21 17:19:19 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char	tab[] = "Hello, World!";
	char	*p_tab;
	int	strlen;

	p_tab = tab;
	strlen = ft_strlen(p_tab);
	printf("Hello, World! has %d character(s)\n", strlen);
	return (0);
}
*/
