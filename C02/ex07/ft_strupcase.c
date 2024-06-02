/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:56:09 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/12 19:03:26 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)

{
	char	offset;
	char	*ptr;

	ptr = str;
	offset = 'a' - 'A';
	while (*str != '\0')
	{
		if (('a' <= *str && *str <= 'z'))
			*str -= offset;
		str++;
	}
	return (ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str1[] = "ABCDE";
// 	char str2[] = "abcde";
// 	char str3[] = "AbCdE";
// 	char str4[] = "12345";
// 	char str5[] = "12345\7f";

// 	printf("%s\n", ft_strupcase(str1));
// 	printf("%s\n", ft_strupcase(str2));
// 	printf("%s\n", ft_strupcase(str3));
// 	printf("%s\n", ft_strupcase(str4));
// 	printf("%s\n", ft_strupcase(str5));
// }