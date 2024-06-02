/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:13:39 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/28 18:04:16 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;

	i = 0;
	asc = 0;
	desc = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			asc++;
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			desc++;
		i++;
	}
	if (asc == i || desc == i)
		return (1);
	return (0);
}

// int	f(int a, int b)
// {
// 	return (a - b);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	int	tab[4] = {1, 2, 3, 4};
// 	// int	tab[4] = {4, 3, 2, 1};
// 	// int	tab[4] = {1, 4, 3, 2};

// 	printf("%d\n", ft_is_sort(tab, 4, f));
// }
