/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:02:10 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/28 17:17:49 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operateur.h"
#include <stdio.h>

int	get_op(char *op, char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) != 1)
		return (-1);
	while (op[i])
	{
		if (*str == op[i])
			return (i);
		i++;
	}
	return (-1);
}

int	check_zero(int op, int b)
{
	if ((op == 3) && b == 0)
	{
		write(1, "Stop : division by zero\n", 25);
		return (1);
	}
	else if ((op == 4) && b == 0)
	{
		write(1, "Stop : modulo by zero\n", 23);
		return (1);
	}
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int		(*f[5])(int a, int b);
	int		nbr[2];
	int		op;
	char	*ops;

	ops = "+-*/%";
	op = get_op(ops, argv[2]);
	nbr[0] = ft_atoi(argv[1]);
	nbr[1] = ft_atoi(argv[3]);
	if (argc != 4 || check_zero(op, nbr[1]))
		return (0);
	f[0] = ft_add;
	f[1] = ft_sub;
	f[2] = ft_mul;
	f[3] = ft_div;
	f[4] = ft_mod;
	if (op > -1)
	{
		ft_putnbr(f[op](nbr[0], nbr[1]));
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
}
