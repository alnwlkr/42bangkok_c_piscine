/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:33:01 by panoma            #+#    #+#             */
/*   Updated: 2022/08/03 18:02:03 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	if (str[i] == 43 | str[i] == 45)
	{
		if(str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	result *= sign;
	return (result);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("INPUT\t %s\n", argv[1]);
		printf("ATOI\t %d\n", atoi(argv[1]));
		printf("FT_ATOI\t %d\n", ft_atoi(argv[1]));
	}
	return (0);
}
