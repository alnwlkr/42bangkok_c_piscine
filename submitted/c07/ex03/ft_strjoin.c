/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:15:07 by panoma            #+#    #+#             */
/*   Updated: 2022/08/02 19:46:20 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		i;
	int		j;
	int		k;

	arr = malloc(sizeof(arr));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			arr[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			arr[k++] = sep[j++];
		i++;
	}
	arr[k] = '\0';
	return (arr);
}
/*
#include <stdio.h>
int	main(void)
{
	char *text[13];

	text[0] = "Hello";
	text[1] = "This";
	text[2] = "Is";
	text[3] = "ft_strjoin";
	text[4] = "at";
	text[5] = "42";
	text[6] = "Bangkok";
	text[7] = "builded";
	text[8] = "by";
	text[9] = "panoma";
	text[10] = "inspired";
	text[11] = "by";
	text[12] = "Github";

	printf("%s\n", ft_strjoin(13, text, " - "));
}
*/
