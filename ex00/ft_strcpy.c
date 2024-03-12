/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 20:24:06 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/12 18:40:34 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		str_len(char *str);

// The stpcpy() and strcpy() functions copy the string src to dst
// (including the terminating `\0' character.)
// Implying that there string ends with \0
char	*ft_strcpy(char *dest, char *src)
{
	int		len;
	char	*ptr;

	ptr = dest;
	len = str_len(src);
	while (len >= 0)
	{
		*dest++ = *src++;
		len--;
	}
	return (ptr);
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

// 	// Test case 1: Normal string copy
//     res = strcpy(dest, src);
//     printf("strcpy response: %s\n", res);
//     ft_res = ft_strcpy(ft_dest, ft_src);
//     printf("ft_strcpy response: %s\n", ft_res);

//     // Test case 2: Copy empty string
//     char empty[] = "";
//     char dest2[1];
//     char ft_dest2[1];
//     res = strcpy(dest2, empty);
//     printf("strcpy empty string: %s\n", res);
//     ft_res = ft_strcpy(ft_dest2, empty);
//     printf("ft_strcpy empty string: %s\n", ft_res);
// }
