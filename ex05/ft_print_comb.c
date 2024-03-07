/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:20:00 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/07 10:21:28 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;
	char	three_digit_number[3];
	char	punctuation[2];

	a = '0';
	punctuation[0] = ',';
	punctuation[1] = ' ';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				three_digit_number[0] = a;
				three_digit_number[1] = b;
				three_digit_number[2] = c;
				write(1, &three_digit_number, 3);
				if (three_digit_number[0] == '7' && 
					three_digit_number[1] == '8' && 
					three_digit_number[2] == '9')
				{
					break;
				}
				else
				{
					write(1, &punctuation, 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
