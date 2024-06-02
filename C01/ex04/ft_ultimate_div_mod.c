/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 09:52:38 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/08 09:59:09 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// #include <stdio.h>
// int	main(void){
// 	int	a = 42;
// 	int	b = 5;

// 	printf("Before: a = %d, b = %d\n", a, b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("After: a = %d, b = %d\n", a, b);
// 	return(0);
// }