/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 08:20:39 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/18 08:32:57 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}

void	ft_swap(char *s1, char *s2)
{
	char	*tmp;

	tmp = s1;
	s1 = s2;
	s2 = tmp;
}

void	ft_sort_argv(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				ft_swap(argv[i], argv[j]);
			}
			j++;
		}
		i++;
	}
}

void	ft_print(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i] != '\0')
		{
			write(1, argv[i], 1);
			argv[i]++;
		}
		write(1, "\n", 1);
		i++;
	}
}
int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	else if (argc == 2)
	{
		ft_print(argc, argv);
		return (0);
	}
	else
		ft_sort_argv(argc, argv);

	ft_print(argc, argv);
}