/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:56:03 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/12 18:45:15 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!('A' <= *str && *str <= 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char str1[] = "ABCDE";
// 	char str2[] = "abcde";
// 	char str3[] = "AbCdE";
// 	char str4[] = "12345";

// 	printf("%d\n", ft_str_is_uppercase(str1));
// 	printf("%d\n", ft_str_is_uppercase(str2));
// 	printf("%d\n", ft_str_is_uppercase(str3));
// 	printf("%d\n", ft_str_is_uppercase(str4));
// }