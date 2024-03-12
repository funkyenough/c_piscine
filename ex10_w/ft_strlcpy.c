/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:09:51 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/12 20:25:12 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				str_len(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	if (n == 0)
		return(str_len(src));
	while (n > 1 && *src != 0)
	{
		*dest++ = *src++;
		n--;
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
#include <stdio.h>
#include <string.h>

void print_helper(char *str)
{
	printf("%s\n", str);
	for (int j = 0; j < str_len(str) + 50; j++)
	{
		if (j == str_len(str) + 1)
		{
			printf(" || ");
		}
		printf("%02X ", str[j]);
	}
	printf("\n\n");
}

int	main(void)
{
	char			dest[15];
	char			src[] = " ";
	size_t str_return ;

	char			ft_dest[15];
	char			ft_src[] = " ";
	unsigned int ft_str_return ;

	unsigned int	n;

	n = 12;
	str_return= strlcpy(dest, src, n);
	printf("strlcpy length is: %zu\n", str_return);
	print_helper(src);

	ft_str_return = ft_strlcpy(ft_dest, ft_src, n);
	printf("ft_strlcpy length is: %u\n", ft_str_return);
	print_helper(ft_src);


	return (0);
}
