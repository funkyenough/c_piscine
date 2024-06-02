/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:09:51 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/14 14:48:55 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				str_len(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	len;

	len = str_len(src);
	while (n - 1 > 0 && *dest != 0)
	{
		*dest++ = *src++;
		n--;
	}
	*dest = '\0';
	return (len);
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

// void	print_helper(char *str)
// {
// 	printf("%s\n", str);
// 	for (unsigned long j = 0; j < strlen(str) + 1; j++)
// 	{
// 		if (j == strlen(str))
// 		{
// 			printf("|| ");
// 		}
// 		printf("%02X ", str[j]);
// 	}
// 	printf("\n\n");
// }

// void	test_strlcpy(char *dest, char *src, size_t n)
// {
// 	// memset(dest, 'x', 15);
// 	// printf("strlcpy length is: %zu\n", strlcpy(dest, src, n));
// 	// print_helper(dest);
// 	memset(dest, 'x', 15);
// 	printf("ft_strlcpy length is: %u\n", ft_strlcpy(dest, src, n));
// 	print_helper(dest);
// }

// int	main(void)
// {
// 	char	dest[15];
//     test_strlcpy(dest, "Hello World!", 12);
//     test_strlcpy(dest, "Short", 5);
// 	test_strlcpy(dest, "No overflow", 11);
// 	test_strlcpy(dest, "12345678901234", 14);
// 	test_strlcpy(dest, "Exact size", 10);
// 	test_strlcpy(dest, "Short str", 9);
//     test_strlcpy(dest, "", 0);
//     test_strlcpy(dest, "This string is too long!", 24);
// 	return (0);
// }
