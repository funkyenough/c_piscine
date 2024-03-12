/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:09:51 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/12 19:02:58 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*ptr;

	ptr = dest;
	while (n >= 1 && *src != 0)
	{
		*dest++ = *src++;
		n--;
	}
	while (n >= 1)
	{
		*dest++ = '\0';
		n--;
	}
	return (ptr);
}
// #include <stdio.h>
// #include <string.h>

// void	print_hex(char *str)
// {
// 	for (unsigned int j = 0; j < sizeof(str) + 50; j++)
// 		printf("%02X ", str[j]);
// 	printf("\n\n");
// }
// int	main(void)
// {
// 	unsigned int	n;
// 	char			dest[30];
// 	char			src[] = "Hello World!";
// 	char			*str;
// 	char			ft_dest[30];
// 	char			ft_src[] = "Hello World!";
// 	char			*ft_str;

// 	n = 30;
// 	ft_str = ft_strncpy(ft_dest, ft_src, n);
// 	printf("ft_strncpy output is\n%s\n", ft_str);
// 	print_hex(ft_str);
// 	str = strncpy(dest, src, n);
// 	printf("strncpy output is\n%s\n", str);
// 	print_hex(str);
// 	return (0);
// }
