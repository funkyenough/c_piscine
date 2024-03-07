/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:13:05 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/07 15:11:36 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	number;

number = '0';
	while (number <= '9')
	{
		ft_putchar(number);
		number++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
