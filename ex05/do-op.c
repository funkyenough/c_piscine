/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:02:10 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/28 16:56:27 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operateur.h"
#include <stdio.h>

int	check_op(char *op, char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) != 1)
		return (-1);
	while (i < 5)
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
	int		a;
	int		b;
	int		op;
	char	*ops;
	int		(*f[5])(int a, int b);

	if (argc != 4)
		return (0);
	f[0] = ft_add;
	f[1] = ft_sub;
	f[2] = ft_mul;
	f[3] = ft_div;
	f[4] = ft_mod;
	ops = "+-*/%";
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	op = check_op(ops, argv[2]);
	if (op > -1)
	{
		if(check_zero(op, b))
			return (0);
		else
			ft_putnbr(f[op](a, b));
	}
	return (0);
}
