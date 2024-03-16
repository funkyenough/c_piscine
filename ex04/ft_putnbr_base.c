/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:09:48 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/16 12:12:13 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <unistd.h>

int		ft_str_len(char *str);
int		ft_check_base(char *str);

void	ft_putnbr_recursion(long nbr, char *str, int digits)
{
	if (nbr >= digits)
	{
		ft_putnbr_recursion(nbr / digits, str, digits);
		ft_putnbr_recursion(nbr % digits, str, digits);
	}
	else
		write(1, &str[nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		digits;
	long	long_nbr;

	if (ft_check_base(base) == 0)
		return ;
	digits = ft_str_len(base);
	long_nbr = (long)nbr;
	if (long_nbr == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else if (long_nbr < 0)
	{
		write(1, &"-", 1);
		long_nbr = -long_nbr;
	}
	ft_putnbr_recursion(long_nbr, base, digits);
}

int	ft_str_len(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str != 0)
		str++;
	return (str - ptr);
}

int	ft_check_base(char *str)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_str_len(str);
	if (len <= 1)
		return (0);
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

// void	helper(int nbr, char *base)
// {
// 	ft_putnbr_base(nbr, base);
// 	printf("\n");
// }
// int	main(void)
// {
// 	char	str[] = "0123456789ABCDEF";
// 	char	str[] = "01";
// 	char	str[] = "0123456789";
// 	char	str[] = "poneyvif";

// 	helper(INT_MAX, str);
// 	helper(INT_MIN, str);
// 	helper(0, str);
// 	helper(1, str);
// 	helper(-1, str);
// 	helper(123456789, str);
// 	helper(-123456789, str);
// 	helper(10, str);
// 	helper(-10, str);
// 	helper(1000000000, str);
// 	helper(-1000000000, str);
// 	return (0);
// }
