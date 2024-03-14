/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 20:02:37 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/14 20:02:43 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strstr() function returns a pointer to
// the beginning of the first occurrence of string2 in string1.
// If string2 does not appear in string1,
// the strstr() function returns NULL.
// If string2 points to a string with zero length,
// the strstr() function returns string1.
char	*ft_strstr(char *str, char *to_find)
{
	char	*start;
	char	*needle;

	needle = to_find;
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str != *to_find)
			str++;
		else
		{
			start = str;
			needle = to_find;
			while (*needle != '\0' && *++start == *++needle)
			{
				;
			}
			if (*needle == '\0')
				return (str);
			str++;
		}
	}
	return (0);
}
#include <stdio.h>
#include <string.h>

void	helper(char *str, char *to_find)
{
	char	*test;
	char	*stdlib;

	test = ft_strstr(str, to_find);
	stdlib = strstr(str, to_find);
	printf("%d\n", strncmp(test, stdlib, strlen(str)));
	printf("%s ", ft_strstr(str, to_find));
	printf("%s\n\n", strstr(str, to_find));
}
// int	main(void)
// {
// 	char str[] = "1TaDoWqB1s%Wp|S)d20~CD.V-kMAK/d";
// 	char to_find1[] = "1TaDoWqB1s%Wp|S)d20~CD.V-kMAK/d";
// 	char to_find2[] = "DoWqB1s";
// 	char to_find3[] = "d";
// 	char to_find4[] = "D.";
// 	// char to_find5[] = "llo, World!";

// 	helper(str, to_find1);
// 	helper(str, to_find2);
// 	helper(str, to_find3);
// 	helper(str, to_find4);
// 	// helper(str, to_find5);
// }