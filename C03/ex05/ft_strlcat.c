/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 20:02:36 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/15 18:01:01 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_str_len(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_str_len(dest);
	src_len = ft_str_len(src);
	if (size == 0 || dest_len > size)
		return (size + src_len);
	while (*dest != 0)
		dest++;
	while (size - dest_len > 0)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	*(--dest) = '\0';
	return (dest_len + src_len);
}

unsigned int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return ((unsigned int)i);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char ft_dest[15] = "Hello, ";
	char dest[15] = "Hello, ";
	char ft_src[10] = "123World!";
	char src[10] = "123World!";
	unsigned int size = 20;

	printf("%lu %d\n", strlcat(dest, src, size), ft_strlcat(ft_dest, ft_src,
			size));
	printf("%s\n%s\n", dest, ft_dest);

	return (0);
}