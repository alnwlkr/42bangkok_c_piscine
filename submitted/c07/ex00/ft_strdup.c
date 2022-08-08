/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 19:34:19 by panoma            #+#    #+#             */
/*   Updated: 2022/08/02 16:05:39 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	while (src[i])
			i++;
	copy = malloc((sizeof(char) * i) + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (src[i])
	{
			copy[i] = src[i];
			i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("%s", strdup("Hello, World!\n"));
	printf("%s", ft_strdup("Hello, World!\n"));
	return (0);
}
*/
