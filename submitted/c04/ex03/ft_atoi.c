/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:22:43 by panoma            #+#    #+#             */
/*   Updated: 2022/07/30 20:01:46 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	signcheck(char *str, int *ptr_i)
{
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign = sign * -1;
		i++;
	}
	*ptr_i = i;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = signcheck(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10;
		result = result + (str[i] - '0');
		i++;
	}
	result = result * sign;
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str = "     ---+---+0123456789ab567";

	printf("%d", ft_atoi(str));
}
*/
