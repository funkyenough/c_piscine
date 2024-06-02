/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:56:11 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/12 19:03:34 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)

{
	char	offset;
	char	*ptr;

	ptr = str;
	offset = 'a' - 'A';
	while (*str != '\0')
	{
		if (('A' <= *str && *str <= 'Z'))
		{
			*str += offset;
		}
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

// 	printf("%s\n", ft_strlowcase(str1));
// 	printf("%s\n", ft_strlowcase(str2));
// 	printf("%s\n", ft_strlowcase(str3));
// 	printf("%s\n", ft_strlowcase(str4));
// 	printf("%s\n", ft_strlowcase(str5));
// }