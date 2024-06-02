/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:40:16 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/15 10:33:58 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest;
	while (*dest != 0)
		dest++;
	while (*src != 0 && nb > 0)
	{
		*dest++ = *src++;
		nb--;
	}
	*dest = '\0';
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
// 	printf(" || %02X\n\n", str[i++]);
// }
// int	main(void)
// {
// 	char dest[30] = "Hello, ";
// 	char src[] = "World!";
// 	char *str;
// 	unsigned int nb = 3;
// 	char ft_dest[30] = "Hello, ";
// 	char ft_src[] = "World!";
// 	char *ft_str;
// 	unsigned int ft_nb = 3;

// 	ft_str = ft_strncat(ft_dest, ft_src, ft_nb);
// 	str = strncat(dest, src, nb);
// 	printf("Output of strncat is: %s\n", str);
// 	print_helper(str);
// 	printf("Output of ft_strncat is: %s\n", ft_str);
// 	print_helper(ft_str);
// }