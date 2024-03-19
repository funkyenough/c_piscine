/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:14:15 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/19 13:32:48 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  Write a function that will concatenate all the strings pointed by strs separated by sep.
//  size is the number of strings in strs
//  If size is 0, you must return an empty string that you can free().

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	char	*s;

	s = str;
	while (*str != '\0')
		str++;
	return (str - s);
}
char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*dest != 0)
		dest++;
	while (*src != 0)
		*dest++ = *src++;
	*dest = '\0';
	return (ptr);
}
int	ft_strslen(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i != size - 1)
			len += ft_strlen(sep);
		i++;
	}
	return (len);
}
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*joined;

	len = ft_strslen(size, strs, sep);
	joined = (char *)malloc((len + 1) * sizeof(char));
	*joined = '\0';
	if (joined == NULL)
		return (NULL); // handle memory allocation failure
	if (size == 0)
		free(joined);
	i = 0;
	while (i < size)
	{
		ft_strcat(joined, strs[i]);
		if (i != size - 1)
			ft_strcat(joined, sep);
		i++;
	}
	// strs[i] = "\0";
	return (joined);
}

int	main(void)
{
	char *strs[] = {
		"Hello",
		"World!",
		"Hello",
		"World!",
		"Hello",
		"World!",
		"Hello",
		"World!",
		"Hello",
		"World!",
	};
	char *sep = ", ";
	int size = 10;

	printf("%s\n", ft_strjoin(size, strs, sep));
	free(ft_strjoin(size, strs, sep));
	return (0);
}