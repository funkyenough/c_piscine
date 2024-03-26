/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:09:46 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/26 10:11:05 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	count;

	count = 0;
	while (length)
	{
		if (f(*tab) != 0)
			count++;
		tab++;
		length--;
	}
	return (count);
}

int	f(char *c)
{
	if (*c == ' ')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*tab[3] = {" ", " ", "ab"};

// 	printf("%d\n", ft_count_if(tab, 3, f));
// }
