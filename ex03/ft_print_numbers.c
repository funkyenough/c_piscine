/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:13:05 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/07 13:52:43 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
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
