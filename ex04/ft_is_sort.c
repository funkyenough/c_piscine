/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:13:39 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/26 12:21:28 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	while (length)
	{
		if (f(*tab, *(tab + 1) != 0))
			break;
		tab++;
		length--;
	}
	while (length)
	{
		if (f(*tab, *(tab + 1)) >= 0)
			return (-1);
		tab++;
		length--;
	}
	return (0);
}

// int	f(int a, int b)
// {
// 	return (a - b);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	int	tab[4] = {1, 2, 3, 2};

// 	printf("%d\n", ft_is_sort(tab, 4, f));
// }
