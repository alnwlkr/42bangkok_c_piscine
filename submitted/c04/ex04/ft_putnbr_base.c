/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:59:25 by panoma            #+#    #+#             */
/*   Updated: 2022/07/30 23:15:58 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	basecheck(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || ft_strlen(str) == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		len;

	len = ft_strlen(base);
	nb = nbr;
	if (basecheck(base) == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		if (nb < len)
			ft_putchar(base[nb]);
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
	}
}
/*
#include <stdio.h>

int	main(void)
{
	ft_putnbr_base(-42, "01");
	printf("\n");
	ft_putnbr_base(-42, "poneyvif");
	printf("\n");
	ft_putnbr_base(-42, "0123456789");
	printf("\n");
	ft_putnbr_base(-42, "012456789abcdef");
	printf("\n");
	return (0);
}
*/
