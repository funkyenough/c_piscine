/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 20:24:06 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/14 13:26:44 by yinhong          ###   ########.fr       */
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

// void	test_strcpy(char *dest, char *src)
// {
// 	char	*res;

// 	// Flush dest with a different value
// 	memset(dest, 'X', strlen(dest));
// 	res = strcpy(dest, src);
// 	printf("strcpy: %s\n", res);
// 	// Flush dest again before reusing it
// 	memset(dest, 'X', strlen(dest));
// 	res = ft_strcpy(dest, src);
// 	printf("ft_strcpy: %s\n\n", res);
// }
// int	main(void)
// {
// 	char	src1[1] = "";
// 	char	src2[2] = "a";
// 	char	src3[100] = "exceeds the original size of dest.";
// 	char	src4[100] = "a newline character.\nTest";
// 	char	src5[100] = "a tab character.\tTest";
// 	char	src6[100] = "a null character.\0Test";
// 	char	src7[100] = "a backslash character.\\Test";
// 	char	src8[100] = "special characters.~`!@#$%^&*()-_=+{}[]|;:'<>,.?/Test";
// 	char	src9[100] = "spaces. Test";
// 	char	src10[100] = "non-printable characters.\x01\x02\x03Test";
// 	char	dest[10];

// 	test_strcpy(dest, src1);
// 	test_strcpy(dest, src2);
// 	test_strcpy(dest, src3);
// 	test_strcpy(dest, src4);
// 	test_strcpy(dest, src5);
// 	test_strcpy(dest, src6);
// 	test_strcpy(dest, src7);
// 	test_strcpy(dest, src8);
// 	test_strcpy(dest, src9);
// 	test_strcpy(dest, src10);
// 	return (0);
// }
