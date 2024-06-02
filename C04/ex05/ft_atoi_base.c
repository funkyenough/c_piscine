/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:09:47 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/22 22:06:06 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str);

int	is_valid(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ' || c == '+' || c == '-')
		return (0);
	return (1);
}

int	ft_check_base(char *str)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_strlen(str);
	if (len <= 1)
		return (0);
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (str[i] == str[j] || !is_valid(str[i]) || !is_valid(str[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

int	char_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	number;
	int	base_len;

	if (!ft_check_base(base))
		return (0);
	sign = 1;
	number = 0;
	base_len = ft_strlen(base);
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' ')
		str++;
	while ((*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (char_in_base(*str, base) >= 0)
	{
		number = number * base_len + char_in_base(*str, base);
		str++;
	}
	return (sign * number);
}

// int	main(void)
// {
// 	printf("%d\n", ft_atoi_base("-------+++-+-+--+++123456", "0123456789"));
// 	printf("%d\n", ft_atoi_base("-------+++-+-+--+++1100100", "01"));
// 	printf("%d\n", ft_atoi_base("-------+++-+-+---+++abcdef",
// 			"0123456789abcdef"));
// 	printf("%d\n", ft_atoi_base("-------+++-+-+---+++/********", "*/="));
// 	printf("%d\n", ft_atoi_base("-------+++-+-+---+++1111", "1"));
// 	printf("%d\n", ft_atoi_base("  \t\n------+++-+-+---+++123", "0123456789"));
// 	printf("%d\n", ft_atoi_base("-------+++-+-+---+++123abc", "0123456789"));
// 	printf("%d\n", ft_atoi_base("-------+++-+-+--+++2147483647", "0123456789"));
// 	printf("%d\n", ft_atoi_base("-------+++-+-+---+++-2147483648",
// 			"0123456789"));
// 	printf("%d\n", ft_atoi_base("-------+++-+-+---+++12#34", "0123456789#"));
// 	printf("%d\n", ft_atoi_base("HELLO",
// 			"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"));
// }
