/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:10:02 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/18 15:10:13 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	upper_bound;
	int	i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	upper_bound = nb / 2 + 1;
	i = 2;
	while (i < upper_bound)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("0 is prime: %d\n", ft_is_prime(0));
// 	printf("1 is prime: %d\n", ft_is_prime(1));
// 	printf("2 is prime: %d\n", ft_is_prime(2));
// 	printf("3 is prime: %d\n", ft_is_prime(3));
// 	printf("4 is prime: %d\n", ft_is_prime(4));
// 	printf("5 is prime: %d\n", ft_is_prime(5));
// 	printf("6 is prime: %d\n", ft_is_prime(6));
// 	printf("7 is prime: %d\n", ft_is_prime(7));
// 	printf("8 is prime: %d\n", ft_is_prime(8));
// 	printf("9 is prime: %d\n", ft_is_prime(9));
// 	printf("10 is prime: %d\n", ft_is_prime(10));
// 	printf("11 is prime: %d\n", ft_is_prime(11));
// 	printf("12 is prime: %d\n", ft_is_prime(12));
// 	printf("13 is prime: %d\n", ft_is_prime(13));

// 	return (0);
// }