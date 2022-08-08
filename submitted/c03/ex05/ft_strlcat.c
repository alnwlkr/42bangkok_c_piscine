/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:40:07 by panoma            #+#    #+#             */
/*   Updated: 2022/07/28 22:04:42 by panoma           ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_l;
	unsigned int	src_l;
	unsigned int	i;
	unsigned int	result;

	i = 0;
	dest_l = ft_strlen(dest);
	src_l = ft_strlen(src);
	if (dest_l < size)
		result = dest_l + src_l;
	else
		result = src_l + size;
	if (size == 0)
		return (result);
	while (src[i] && dest_l + i < size - 1)
	{
		dest[dest_l + i] = src[i];
		i++;
	}
	dest[dest_l + i] = '\0';
	return (result);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[20] = "123";
	char	src[] = "4567890";
	unsigned int	size = 10;
	unsigned int	result;

	printf("%s | %s | %d\n", dest, src, size);
	result = ft_strlcat(dest, src, size);
	printf("%s | %d", dest, result);
	return (0);
}
*/
