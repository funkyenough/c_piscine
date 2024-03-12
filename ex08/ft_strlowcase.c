/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:56:11 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/11 19:56:57 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)

{
	char	offset;
	int		count;

	offset = 'a' - 'A';
	count = 0;
	while (str[count] != '\0')
	{
		if (('A' <= str[count] && str[count] <= 'Z'))
		{
			str[count] += offset;
		}
		count++;
	}
	return (str);
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