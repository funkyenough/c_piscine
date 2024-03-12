/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 20:24:06 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/11 16:30:29 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		str_len(char *str);

// The stpcpy() and strcpy() functions copy the string src to dst
// (including the terminating `\0' character.)
// Implying that there string ends with \0
char	*ft_strcpy(char *dest, char *src)
{
	int	count;
	int	length;

	length = str_len(src);
	count = 0;
	while (count < length)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
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
// 	char	dest[6];
// 	char	src[6] = "abcde";
// 	char	*res;
// 	char	ft_dest[6];
// 	char	ft_src[6] = "abcde";
// 	char	*ft_res;

// 	res = strcpy(dest, src);
// 	printf("strcpy response: %s\n", res);
// 	ft_res = ft_strcpy(ft_dest, ft_src);
// 	printf("ft_strcpy response: %s\n", ft_res);
// 	return (0);
// }
