/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:10:42 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/26 10:10:42 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	while (length)
	{
		(*f)(*tab);
		tab++;
		length--;
	}
}

// #include <limits.h>
// #include <unistd.h>

// void	ft_putnbr(int nb)
// {
// 	char	mod;

// 	if (nb == INT_MIN)
// 	{
// 		write(1, "-2147483648", 11);
// 		return ;
// 	}
// 	if (nb < 0)
// 	{
// 		write(1, &"-", 1);
// 		nb = -nb;
// 	}
// 	if (nb != 0)
// 	{
// 		mod = nb % 10 + '0';
// 		ft_putnbr(nb / 10);
// 	}
// 	write(1, &mod, 1);
// }

// int	main(void)
// {
// 	int arr[3] = {1, 2 ,3};
// 	ft_foreach(arr, 3, &ft_putnbr);

// 	return (0);
// }