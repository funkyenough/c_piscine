/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:04:58 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/18 21:44:35 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// min included max excluded
// Pointing to a null array can be done by setting it to 0
void	ft_initialize_array(int *array, int min, int max)
{
	int	i;

	i = 0;
	while (i < (max - min))
	{
		array[i] = 0;
		i++;
	}
}
int	*ft_range(int min, int max)
{
	int	*array;
	int	tmp;
	int	*ptr;

	array = (int *)malloc((max - min) * sizeof(int));
	ptr = array;
	ft_initialize_array(array, min, max);
	if (min >= max)
		array = 0;
	tmp = min;
	while (tmp < max)
	{
		*ptr = tmp;
		tmp++;
		ptr++;
	}
	return (array);
}

int	main(void)
{
	int	min;
	int	max;
	int	*range;

	// segfault
	min = INT_MIN;
	max = INT_MAX;
	range = ft_range(min, max);
	for (int i = 0; (i < (max - min)); i++)
		printf("%d ", range[i]);
	free(range);
	return (0);
}
