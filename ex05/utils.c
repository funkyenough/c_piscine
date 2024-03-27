/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:37:12 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/27 18:45:54 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <unistd.h>

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

int	ft_strlen(char *str)
{
	char	*s;

	s = str;
	while (*str != '\0')
		str++;
	return (str - s);
}

void	ft_putnbr_recursion(int nb)
{
	char	mod;

	if (nb != 0)
	{
		mod = nb % 10 + '0';
		ft_putnbr_recursion(nb / 10);
		write(1, &mod, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, &"-", 1);
		nb = -nb;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	ft_putnbr_recursion(nb);
}