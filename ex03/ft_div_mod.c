/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:09:38 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/07 20:09:49 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*mod = a % b;
	*div = (a - *mod) / b;
}

// int	main(void)
// {
// 	int a;
// 	int b;
// 	int div;
// 	int mod;

// 	a = 16;
// 	b = 5;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("div = %d, mod = %d", div, mod);
// 	return(0);
// }