/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:26:10 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/18 14:37:48 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	tmp;

	tmp = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_recursive_power(1, 4));
// 	printf("%d\n", ft_recursive_power(2, 4));
// 	printf("%d\n", ft_recursive_power(3, 4));
// 	printf("%d\n", ft_recursive_power(-1, 3));
// 	printf("%d\n", ft_recursive_power(-2, 3));
// 	printf("%d\n", ft_recursive_power(-3, 3));
// 	return (0);
// }
