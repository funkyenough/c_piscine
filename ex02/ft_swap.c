/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:08:29 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/07 20:08:55 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

	// c has the value of a
	// a has the value of b
	// b to have the value of a
void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// int	main(void)
// {
// 	int a;
// 	int b;
// 	printf("Initial value: a = %d, b = %d\n", a, b);

// 	a = 1;
// 	b = 2;
// 	printf("Before value: a = %d, b = %d\n", a, b);

// 	ft_swap(&a, &b);
// 	printf("After value: a = %d, b = %d\n", a, b);
// 	return(0);
// }