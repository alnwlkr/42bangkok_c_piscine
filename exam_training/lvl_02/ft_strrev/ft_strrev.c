/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 18:36:18 by panoma            #+#    #+#             */
/*   Updated: 2022/08/04 21:46:45 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	len;
	int	first;
	char	temp;

	len = 0;
	while (str[len])
		len++;
	first = 0;
	while (first < len)
	{
		temp = str[first];
		str[first] = str[len];
		str[len] = temp;
		first++;
		len--;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("ORIGINAL\t %s \n", argv[1]);
		printf("STRREV\t\t %s \n", ft_strrev(argv[1]));
	}
	return (0);
}
