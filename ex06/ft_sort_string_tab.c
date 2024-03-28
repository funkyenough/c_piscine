/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:33:43 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/28 17:34:20 by yinhong          ###   ########.fr       */
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

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	i = 1;
	while (tab[i + 1])
	{
		j = i + 1;
		while (tab[j])
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*tab[] = {"hoge", "hoga", "hige", "hoge1", 0};
// 	int		i;

// 	ft_sort_string_tab(tab);
// 	i = 0;
// 	while (tab[i])
// 	{
// 		printf("tab[%d]: %s\n", i, tab[i]);
// 		i++;
// 	}
// 	return (0);
// }
