/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:56:02 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/12 18:44:30 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!('a' <= *str && *str <= 'z'))
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

// 	printf("%d\n", ft_str_is_lowercase(str1));
// 	printf("%d\n", ft_str_is_lowercase(str2));
// 	printf("%d\n", ft_str_is_lowercase(str3));
// 	printf("%d\n", ft_str_is_lowercase(str4));
// }