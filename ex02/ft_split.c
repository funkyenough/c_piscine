/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:14:08 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/25 17:09:42 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

char	**alloc_strs(char *str, char *charset)
{
	char	**result;
	int		size;
	int		i;

	size = 0;
	i = 0;
	while (str[i])
	{
		if (i != 0 && is_charset(str[i], charset))
			if (!is_charset(str[i - 1], charset))
				size++;
		i++;
	}
	result = (char **)malloc((size + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	return (result);
}

char	*ft_strndup(char *src, int n)
{
	char	*dest;
	char	*ptr;

	dest = (char *)malloc((n + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ptr = dest;
	while (*src != 0 && n)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		j;

	return (result);
}

int	main(void)
{
	char *str = "Hello, World, My, Name is, Ying!, This is a, Test  String.";
	char *charset = ",";
	char **result;

	result = ft_split(str, charset);

	for (int i = 0; i < 8; i++)
		printf("%s", result[i]);
	return (0);
}