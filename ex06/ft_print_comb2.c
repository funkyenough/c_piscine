/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 20:10:22 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/08 21:04:46 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int i, int j)
{
	char	number[5];

	number[0] = i / 10 + '0';
	number[1] = i % 10 + '0';
	number[2] = ' ';
	number[3] = j / 10 + '0';
	number[4] = j % 10 + '0';
	write(1, number, 5);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 99)
	{
		while (j <= 99)
		{
			if (i != j)
			{
				ft_print_numbers(i, j);
				if (i == 98 && j == 99)
					break ;
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
		j = i;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
