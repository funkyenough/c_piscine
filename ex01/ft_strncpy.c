/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:09:51 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/14 13:26:02 by yinhong          ###   ########.fr       */
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
// 	for (unsigned int j = 0; j < strlen(str) + 1; j++)
// 	{
// 		if (j == strlen(str))
// 			printf("|| ");
// 		printf("%02X ", str[j]);
// 	}
// 	printf("\n\n");
// }

// void	test_strncpy(char *dest, char *src, size_t n)
// {
// 	char	*res;
// 	char	*ft_res;

// 	// Flush dest with a different value
// 	memset(dest, 'X', n);
// 	res = strncpy(dest, src, n);
// 	printf("strncpy output is\n%s\n", res);
// 	print_hex(res);
// 	// Flush dest again before reusing it
// 	memset(dest, 'X', n);
// 	ft_res = ft_strncpy(dest, src, n);
// 	printf("ft_strncpy output is\n%s\n", ft_res);
// 	print_hex(ft_res);
// }
// int	main(void)
// {
// 	unsigned int	n;
// 	char			dest[100];
// 	char			src1[1] = "";
// 	char			src2[2] = "a";
// 	char			src3[100] = "exceeds the original size of dest.";
// 	char			src4[100] = "a newline character.\nTest";
// 	char			src5[100] = "a tab character.\tTest";
// 	char			src6[100] = "a null character.\0Test";
// 	char			src7[100] = "a backslash character.\\Test";
// 	char			src8[100] = "special.~`!@#$%^&*()-_=+{}[]|;:'<>,.?/Test";
// 	char			src9[100] = "spaces. Did it copy correctly?";
// 	char			src10[100] = "non-printable characters.\x01\x02\x03Test";

// 	n = 100;
// 	test_strncpy(dest, src1, n);
// 	test_strncpy(dest, src2, n);
// 	test_strncpy(dest, src3, n);
// 	test_strncpy(dest, src4, n);
// 	test_strncpy(dest, src5, n);
// 	test_strncpy(dest, src6, n);
// 	test_strncpy(dest, src7, n);
// 	test_strncpy(dest, src8, n);
// 	test_strncpy(dest, src9, n);
// 	test_strncpy(dest, src10, n);
// 	return (0);
// }
