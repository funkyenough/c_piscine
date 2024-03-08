/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:03:06 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/08 10:03:59 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	write(1, str, 1);
}

// #include <stdio.h>
// int	main(void){
// 	char str = '0';

// 	printf("Before str %d\n", str);
// 	ft_putstr(&str);
// 	printf("\n");
// 	printf("After str %d\n", str);
// 	return 0;
// }