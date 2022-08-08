/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 21:40:10 by panoma            #+#    #+#             */
/*   Updated: 2022/07/26 22:08:40 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cnt;
	unsigned int	i;

	cnt = 0;
	i = 0;
	while (src[cnt] != '\0')
		cnt++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (cnt);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest[] = "";
	char	src2[] = "Hello, World!";
	char	dest2[10] = "";
	unsigned int	n;
	unsigned int	n2;

	n = 4;
	n2 = 4;
	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src, dest, n);
	n = ft_strlcpy(dest, src, n);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src, dest, n);
	n2 = strlcpy(dest2, src2, n2);
	printf("ORIGINAL\n\tsrc: %s\n\tdes: %s\n\tsize: %d", src2, dest2, n2);
	return (0);
}
*/
