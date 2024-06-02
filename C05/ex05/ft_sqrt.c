/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:00:56 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/18 15:00:56 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	upper_bound;
	int	i;

	if (nb < 4)
		return (0);
	upper_bound = nb / 2 + 1;
	i = 0;
	while (i < upper_bound)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("sqrt of 0 is %d\n", ft_sqrt(0));
// 	printf("sqrt of 1 is %d\n", ft_sqrt(1));
// 	printf("sqrt of 2 is %d\n", ft_sqrt(2));
// 	printf("sqrt of 3 is %d\n", ft_sqrt(3));
// 	printf("sqrt of 4 is %d\n", ft_sqrt(4));
// 	printf("sqrt of 5 is %d\n", ft_sqrt(5));
// 	printf("sqrt of 6 is %d\n", ft_sqrt(6));
// 	printf("sqrt of 7 is %d\n", ft_sqrt(7));
// 	printf("sqrt of 8 is %d\n", ft_sqrt(8));
// 	printf("sqrt of 9 is %d\n", ft_sqrt(9));
// 	printf("sqrt of 16 is %d\n", ft_sqrt(16));
// 	printf("sqrt of 25 is %d\n", ft_sqrt(25));
// 	printf("sqrt of -1 is %d\n", ft_sqrt(-1));
// 	return (0);
// }