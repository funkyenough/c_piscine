/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:56:04 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/12 18:48:04 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(' ' <= *str && *str <= '~'))
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
// 	char str5[] = "12345\7f";

// 	printf("%d\n", ft_str_is_printable(str1));
// 	printf("%d\n", ft_str_is_printable(str2));
// 	printf("%d\n", ft_str_is_printable(str3));
// 	printf("%d\n", ft_str_is_printable(str4));
// 	printf("%d\n", ft_str_is_printable(str5));
// }