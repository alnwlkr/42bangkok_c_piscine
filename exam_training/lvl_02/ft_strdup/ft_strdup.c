/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 18:13:26 by panoma            #+#    #+#             */
/*   Updated: 2022/08/03 18:33:24 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int	i;
	int	len;
	char	*arr;
	
	i = 0;
	len = 0;
	while (src[len])
		len++;
	arr = malloc((sizeof(char) * i) + 1);
	if (!arr)
		return (NULL);
	while (i < len)
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("STRDUP\t\t %s\n", strdup(argv[1]));
		printf("FT_STRDUP\t %s\n", strdup(argv[1]));
	}
	return (0);
}
