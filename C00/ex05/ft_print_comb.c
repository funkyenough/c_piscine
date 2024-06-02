/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:20:00 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/08 11:32:46 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	number[3];

	number[0] = '0';
	while (number[0] <= '7')
	{
		number[1] = number[0] + 1;
		while (number[1] <= '8')
		{
			number[2] = number[1] + 1;
			while (number[2] <= '9')
			{
				write(1, &number, 3);
				if (number[0] == '7' && number[1] == '8' && number[2] == '9')
					break ;
				else
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				number[2]++;
			}
			number[1]++;
		}
		number[0]++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
