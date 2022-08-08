/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:37:31 by panoma            #+#    #+#             */
/*   Updated: 2022/07/27 16:17:40 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	tab[] = "aBcD";
	char	tab2[] = "abcd";
	
	printf("%d\n", ft_str_is_lowercase(tab));
	printf("%d\n", ft_str_is_lowercase(tab2));
	return (0);
}
*/
