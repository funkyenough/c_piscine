/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:03:08 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/25 21:46:35 by yinhong          ###   ########.fr       */
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

int	skip_charset(char *str, char *charset, int i)
{
	while (is_charset(str[i], charset))
		i++;
	return (i);
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
		if (is_charset(str[i], charset))
		{
			size++;
			while (is_charset(str[i], charset) && str[i])
				i++;
		}
		else
			i++;
	}
	result = (char **)malloc((size + 2) * sizeof(char *));
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
	int		head;

	i = 0;
	j = 0;
	head = 0;
	result = alloc_strs(str, charset);
	head = skip_charset(str, charset, i);
	while (str[i])
	{
		if (is_charset(str[i], charset) && i >= head)
		{
			result[j++] = ft_strndup(&str[head], i - head);
			head = skip_charset(str, charset, i);
		}
		else
			i++;
	}
	if (i >= head)
		result[j++] = ft_strndup(&str[head], i - head);
	result[j] = NULL;
	return (result);
}

// int		ft_strstrlen(char **str);

// int	main(void)
// {
// 	char	*str;
// 	char	*charset;
// 	char	**result;
// 	int		len;

// 	str = "   Hello, World!    ";
// 	charset = ", %@";
// 	result = ft_split(str, charset);
// 	len = ft_strstrlen(result);
// 	printf("strstrlen %d\n", len);
// 	for (int i = 0; i < len - 1; i++)
// 		printf("%s\n", result[i]);
// 	return (0);
// }

// int	ft_strstrlen(char **str)
// {
// 	char **s;

// 	s = str;
// 	while (*str != (void *)0)
// 		str++;
// 	return (str - s);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char **res;
// 	int count;

// 	res = ft_split("                                           ", "   ");
// 	count = 0;
// 	printf("%p\n", res);
// 	while (res && res[count])
// 	{
// 		printf("count[%d]: %s\n", count, res[count]);
// 		free(res[count++]);
// 	}
// 	free(res);
// 	res = ft_split("                         ", "     ");
// 	count = 0;
// 	printf("%p\n", res);
// 	while (res && res[count])
// 	{
// 		printf("count[%d]: %s\n", count, res[count]);
// 		free(res[count++]);
// 	}
// 	free(res);
// 	res = ft_split("0fnoU", "0fnoU");
// 	count = 0;
// 	printf("%p\n", res);
// 	while (res && res[count])
// 	{
// 		printf("count[%d]: %s\n", count, res[count]);
// 		free(res[count++]);
// 	}
// 	free(res);
// 	res = ft_split("CV2qFU8GG        6mqYY9BGTVCV    LI oV4rgCRPsk9GQFedJQ",
// 			"Y52C");
// 	count = 0;
// 	printf("%p\n", res);
// 	while (res && res[count])
// 	{
// 		printf("count[%d]: %s\n", count, res[count]);
// 		free(res[count++]);
// 	}
// 	free(res);
// 	res = ft_split("  gh  ", " gh");
// 	count = 0;
// 	printf("%p\n", res);
// 	while (res && res[count])
// 	{
// 		printf("count[%d]: %s\n", count, res[count]);
// 		free(res[count++]);
// 	}
// 	free(res);
// }