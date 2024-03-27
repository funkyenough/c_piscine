#include "operateur.h"
#include <stdio.h>

int check_op(char op[5], char *str);

int	main(int argc, char **argv)
{
	int a;
	int b;
	char op[5];
	int (*f[5])(int a, int b);
	int result = 0;

	op[ADD] = '+';
	op[SUB] = '-';
	op[MUL] = '*';
	op[DIV] = '/';
	op[MOD] = '%';

	f[ADD] = ft_add;
	f[SUB] = ft_sub;
	f[MUL] = ft_mul;
	f[DIV] = ft_div;
	f[MOD] = ft_mod;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	// TODO if op is not valid, return
	if (!check_op(op, argv[2]))
	{
		write(1, "0\n", 2);
		return 0;
	}
	else if (*argv[2] == '+')
		result = f[0](a, b);
	else if (*argv[2] == '-')
		result = f[1](a, b);
	else if (*argv[2] == '*')
		result = f[2](a, b);
	else if (*argv[2] == '/')
	{
		if (b == 0)
		{
			write(1, "Stop : division by zero\n", 25);
			return (0);
		}
		result = f[3](a, b);
	}
	else if (*argv[2] == '%')
	{
		if (b == 0)
		{
			write(1, "Stop : modulo by zero\n", 23);
			return (0);
		}
		result = f[4](a, b);
	}
	printf("%d\n", result);
	return (0);
}

int check_op(char op[5], char *str)
{
	int i;

	if (ft_strlen(str) != 1)
		return 0;
	i = 0;
	while (i < 5)
	{
		if (*str == op[i])
			return 1;
		i++;
	}
	return 0;
}
