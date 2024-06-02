/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:26:10 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/18 14:38:03 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A power lower than 0 returns 0.
// 0 power 0 will returns 1
int	ft_iterative_power(int nb, int power)
{
	int	tmp;

	if (power < 0)
		return (0);
	tmp = 1;
	while (power > 0)
	{
		tmp = tmp * nb;
		power--;
	}
	return (tmp);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_iterative_power(1, 4));
// 	printf("%d\n", ft_iterative_power(2, 4));
// 	printf("%d\n", ft_iterative_power(3, 4));
// 	printf("%d\n", ft_iterative_power(-1, 3));
// 	printf("%d\n", ft_iterative_power(-2, 3));
// 	printf("%d\n", ft_iterative_power(-3, 3));
// 	return (0);
// }
