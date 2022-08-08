/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:01:18 by panoma            #+#    #+#             */
/*   Updated: 2022/07/26 18:42:14 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	testcase[] = "aBcDeFgHiJkLmNoPqRsTuVwXyZ";
	char	*tstc;
	tstc = testcase;

	printf("%s\n" ,testcase);
	printf("%s\n" ,ft_strlowcase(tstc));
	return (0);
}
*/
