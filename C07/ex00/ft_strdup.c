/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:45:35 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/18 20:53:32 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str != '\0')
		str++;
	return (str - ptr);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*ptr;

	dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	ptr = dest;
	while (*src != 0)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strdup("Hello, World!"));
// 	printf("%s\n", strdup("Hello, World!"));
// }