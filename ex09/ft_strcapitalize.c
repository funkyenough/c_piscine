/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:56:03 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/11 20:00:28 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	offset;
	int		count;
	int		first;

	offset = 'a' - 'A';
	count = 0;
	first = 1;
	while (str[count] != '\0')
	{
		if (str[count] == ' ' || str[count] == '-' || str[count] == '+')
		{
			first = 1;
			count++;
			continue ;
		}
		if (first == 1 && ('a' <= str[count] && str[count] <= 'z'))
			str[count] -= offset;
		else if ('A' <= str[count] && str[count] <= 'Z' && first != 1)
			str[count] += offset;
		first = 0;
		count++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str1[] = "salut, comment tu vas ? 42mots quarante-deux; ce+et+un";
// 	char str2[] = "ABCDE ABCDE abcde abcde";
// 	char str3[] = "abcde abcde ABCDE ABCDE";
// 	char str4[] = "AbCdE aBcDe AbCdE aBcDe";
// 	char str5[] = "12345";
// 	char str6[] = "12345\7f";

// 	printf("%s\n", ft_strcapitalize(str1));
// 	printf("%s\n", ft_strcapitalize(str2));
// 	printf("%s\n", ft_strcapitalize(str3));
// 	printf("%s\n", ft_strcapitalize(str4));
// 	printf("%s\n", ft_strcapitalize(str5));
// }