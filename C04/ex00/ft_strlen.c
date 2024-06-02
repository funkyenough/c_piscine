/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:09:41 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/16 12:10:20 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	char	*s;

	s = str;
	while (*str != '\0')
		str++;
	return (str - s);
}

// void	helper(char *str)
// {
// 	printf("%lu ", ft_strlen(str) - strlen(str));
// 	printf("%d ", ft_strlen(str));
// 	printf("%lu\n", strlen(str));
// }
// int	main(void)
// {
// 	helper("Hello, World!");
// 	helper("");
// 	helper("This is a longer string.");
// 	helper("Short");
// 	helper("A string with spaces.");
// 	helper("1234567890");
// 	helper("A string with a \n newline character.");
// 	helper("A string with a \t tab character.");
// 	helper("A string with a \0 null character.");
// 	helper("A string with special characters: !@#$%^&*().");
// 	return (0);
// }