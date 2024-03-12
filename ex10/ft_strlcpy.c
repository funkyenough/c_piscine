/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:09:51 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/11 19:58:14 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < (n - 1) && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[n - 1] = '\0';
	return (str_len(src));
}

int	str_len(char *str)
{
	int	size;

	size = 0;
	while (*str != 0)
	{
		size++;
		str++;
	}
	return (size);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char			dest[20];
// 	char			src[] = "Hello World! Test";
// 	size_t			str_return;
// 	unsigned int	n;
// 	char			ft_dest[20];
// 	char			ft_src[] = "Hello World! Test";
// 	unsigned int 	ft_str_return;

// 	n = 12;
// 	ft_str_return = ft_strlcpy(ft_dest, ft_src, n);
// 	printf("ft_strlcpy length is: %d\n", ft_str_return);
// 	for (int j = 0; j < sizeof(ft_dest); j++)
// 	{
// 		if (j == sizeof(ft_dest) - 1)
// 		{
// 			printf(" || ");
// 		}
// 		printf("%02X ", ft_dest[j]);
// 	}
// 	printf("\n\n");

// 	str_return = strlcpy(dest, src, n);
// 	printf("strlcpy length is: %lu\n", str_return);
// 	for (int j = 0; j < sizeof(dest); j++)
// 	{
// 		if (j == sizeof(dest) - 1)
// 			printf(" || ");
// 		printf("%02X ", dest[j]);
// 	}
// 	printf("\n");

// 	return (0);
// }
