/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:36:59 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/14 21:38:22 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_helper(char *str);

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*dest != 0)
		dest++;
	while (*src != 0)
		*dest++ = *src++;
	// *++dest = '\0';
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>

// void	print_helper(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != 0)
// 	{
// 		printf("%02X ", str[i]);
// 		i++;
// 	}
// 	printf(" || %02X \n\n", str[++i]);
// }

// int	main(void)
// {
// 	char	ft_dest[30] = "Hello, ";
// 	char	ft_src[] = "World!";
// 	char	*ft_str;
// 	char	src[] = "World!";
// 	char	*str;
// 	char	dest[30] = "Hello, ";

// 	ft_str = ft_strcat(ft_dest, ft_src);
// 	str = strcat(dest, src);
// 	printf("Output of strcat is: %s\n", str);
// 	print_helper(str);
// 	printf("Output of ft_strcat is: %s\n", ft_str);
// 	print_helper(ft_str);
// }
