/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:09:47 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/22 21:14:00 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	positive;
	int	number;

	number = 0;
	positive = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' ')
		str++;
	while ((*str == '+' || *str == '-'))
	{
		if (*str == '-')
			positive *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (positive * number);
}

// int	main(void)
// {
// 	printf("Case #: atoi ft_atoi\n");
// 	printf("Case 0: %d %d\n ", atoi(" ---+--+1234ab567"),
// 		ft_atoi(" ---+--+1234ab567"));
// 	printf("Case 1: %d %d\n ", atoi("   +42"), ft_atoi("   +42"));
// 	printf("Case 2: %d %d\n", atoi("-0005"), ft_atoi("-0005"));
// 	printf("Case 3: %d %d\n", atoi("2147483647"), ft_atoi("2147483647"));
// 	printf("Case 4: %d %d\n", atoi("-2147483648"), ft_atoi("-2147483648"));
// 	printf("Case 5: %d %d\n", atoi("  \t\n\r\v\f  -123abc"),
// 		ft_atoi("  \t\n\r\v\f  -123abc"));
// 	printf("Case 6: %d %d\n", atoi("++123"), ft_atoi("++123"));
// 	printf("Case 7: %d %d\n", atoi("--123"), ft_atoi("--123"));
// 	printf("Case 8: %d %d\n", atoi("0"), ft_atoi("0"));
// 	printf("Case 9: %d %d\n", atoi(""), ft_atoi(""));
// 	printf("Case a: %d %d\n", atoi("  \t\n\r\v\f  "),
// 		ft_atoi("  \t\n\r\v\f  "));
// 	printf("Case b: %d %d\n", atoi("abc-+-123"), ft_atoi("abc-+-123"));
// 	printf("Case c: %d %d\n", atoi("+-123"), ft_atoi("+-123"));
// 	printf("Case d: %d %d\n", atoi("-+-123"), ft_atoi("-+-123"));
// }
