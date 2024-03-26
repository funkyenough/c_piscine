/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:10:35 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/26 10:11:36 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_any(char **tab, int (*f)(char *))
{
	while (*tab != NULL)
	{
		if (f(*tab) != 0)
			return (1);
		tab++;
	}
	return (0);
}

// #include <stdio.h>

// int	f(char *c)
// {
// 	if (*c == ' ')
// 	{
// 		return (1);
// 	}
// 	else
// 	{
// 		return (0);
// 	}
// }

// int	main(void)
// {
// 	char	*tab[2] = {" ", "ab"};

// 	printf("%d\n", ft_any(tab, f));
// }
