/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:21:19 by panoma            #+#    #+#             */
/*   Updated: 2022/07/31 19:14:45 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			else
				j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main(void)
{
	char	str[] = "dont see me please, grab me and you will see this";
	char	find[] = "grab";

	printf("Original : %s\n", strstr(str, find));
	printf("Modified : %s\n", ft_strstr(str, find));
	return (0);
}
*/
