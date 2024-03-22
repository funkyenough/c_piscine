/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:14:08 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/21 19:35:54 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>

// int	ft_strlen(char *str)
// {
// 	char	*s;

// 	s = str;
// 	while (*str != '\0')
// 		str++;
// 	return (str - s);
// }

// char	*ft_strdup(char *src)
// {
// 	char	*dest;
// 	char	*ptr;

// 	dest = (char *)malloc(ft_strlen(src) * sizeof(char));
// 	if (dest == 0)
// 		return (0);
// 	ptr = dest;
// 	while (*src != 0 && *dest != 0)
// 	{
// 		*ptr = *src;
// 		ptr++;
// 		src++;
// 	}
// 	*ptr = '\0';
// 	return (dest);
// }

// // Check if there is duplicate string, and if so, return 1, else return 0
// int	is_charset(char c, char *charset)
// {
// 	while (*charset)
// 	{
// 		if (c == *charset)
// 			return (1);
// 	}
// 	return (0);
// }

// char	**ft_split(char *str, char *charset)
// {
// 	char	**result;
// 	char	*char_ptr;
// 	char	**str_ptr;

// 	result = malloc(sizeof(char *) * (ft_strlen(str) + 1));
// 	if (!result)
// 		retunr NULL;
// 	str_ptr = result;
// 	char_ptr = str;
// 	while (*str != 0)
// 	{
// 		if (is_charset(*char_ptr, charset))
// 		{
// 			if((char_ptr - str) <= 0)
// 				continue ;
// 			*str_ptr = (char *)malloc((char_ptr - str - 1) * sizeof(char));
// 			if (str_ptr == 0)
// 			{
// 				free(str_ptr);
// 				continue ;
// 			}
// 			ft_strncpy(*str_ptr++, str, (char_ptr - str));
// 			str = char_ptr;
// 		}
// 		char_ptr++;
// 	}
// 	return (result);
// }


// int	main(void)
// {
// 	char	str[] = "Hello, World!";
// 	char	charset[] = "lo";

// 	ft_split(str, charset);
// 	return (0);
// }
