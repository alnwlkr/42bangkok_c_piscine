/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:46:59 by panoma            #+#    #+#             */
/*   Updated: 2022/07/29 16:56:28 by panoma           ###   ########.fr       */
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
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	char	str[15] = "123456789";
	int	i;

	i = ft_strlen(str);
	printf("%d\n", i);
	write(1, i, 1);
	return (0);
}
*/
