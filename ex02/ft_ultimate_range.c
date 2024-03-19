/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:04:58 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/19 10:12:19 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// min included max excluded
// Pointing to a null array can be done by setting it to 0
int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	tmp;

	array = (int *)malloc((max - min) * sizeof(int));
	*range = array;
	if (min >= max)
		return (-1);
	tmp = min;
	while (tmp < max)
	{
		*array = tmp;
		tmp++;
		array++;
	}
	return (max - min);
}

// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*range;

// 	min = 0;
// 	max = 50;
// 	range = 0;
// 	printf("%d\n", ft_ultimate_range(&range, min, max));
// 	for (int i = 0; (i < (max - min)); i++)
// 		printf("%d ", range[i]);
// 	free(range);
// 	return (0);
// }
