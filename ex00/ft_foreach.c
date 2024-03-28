/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:10:42 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/28 16:00:42 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;
	
	i = -1;
	while (++i < length)
		(*f)(tab[i]);
}

// #include <limits.h>
// #include <unistd.h>

// void ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	long n;

// 	n = (long)nb;
// 	if (n < 0)
// 	{
// 		write(1, &"-", 1);
// 		n *= -1;
// 	}
// 	if (n >= 10)
// 	{
// 		ft_putnbr(n / 10);
// 		ft_putnbr(n % 10);
// 	}
// 	else
// 		ft_putchar(n + '0');
// }

// int	main(void)
// {
// 	int arr[3] = {-2147483648, 2147483647 ,0};
// 	ft_foreach(arr, 3, &ft_putnbr);

// 	return (0);
// }