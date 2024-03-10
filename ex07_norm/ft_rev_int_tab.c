/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:34:29 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/10 10:22:54 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int tmp[size];
	int i;

	i = 0;
	while (i < size)
	{
		tmp[i] = tab[size - 1 - i];
		i++;
	}
}

// int	main(void){
// 	int size = 5;
// 	int	tab[size];
	
// 	tab[0] = 0;
// 	tab[1] = 1;
// 	tab[2] = 2;
// 	tab[3] = 3;
// 	tab[4] = 4;

// 	ft_rev_int_tab(tab, size);

// 	int i = 0;
// 	printf("Original tab is: ");
// 	while (i < size) {
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return 0;
// }

// 	i = 0;
// 	printf("Reversed tab is: ");
// 	while (i < size) {
// 		printf("%d", tmp[i++]);
// 	}
// 	printf("\n");