/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:28:17 by panoma            #+#    #+#             */
/*   Updated: 2022/08/03 16:30:44 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	n1;
	int	n2;
	int	result;

	if (argc == 4)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[3]);

		if (argv[2][0] == '+' && argv[2][1] == '\0')
		{
			result = n1 + n2;
			printf("%d", result);
		}
		else if (argv[2][0] == '-' && argv[2][1] == '\0')
		{
			result = n1 - n2;
			printf("%d", result);
		}
		else if (argv[2][0] == '*' && argv[2][1] == '\0')
		{
			result = n1 * n2;
			printf("%d", result);
		}
		else if (argv[2][0] == '/' && argv[2][1] == '\0')
		{
			result = n1 / n2;
			printf("%d", result);
		}
		else if (argv[2][0] == '%' && argv[2][1] == '\0')
		{
			result = n1 % n2;
			printf("%d", result);
		}
	}
	printf("\n");
	return (0);
}
