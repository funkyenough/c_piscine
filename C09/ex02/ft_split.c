/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:03:08 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/26 20:15:20 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int		wordlength;

	i = 0;
	j = 0;
	wordlength = 0;
	result = (char **)malloc((ft_strlen(str) + 1) * sizeof(char *));
	while (str[i])
	{
		while (is_charset(str[i], charset))
			i++;
		wordlength = 0;
		while (str[i + wordlength] && !is_charset(str[i + wordlength], charset))
			wordlength++;
		if (wordlength)
			result[j++] = ft_strndup(&str[i], wordlength);
		i += wordlength;
	}
	result[j] = NULL;
	return (result);
}

#include <stdio.h>
int  main(void)
{
  char  **res;
  int  count;
  
  res = ft_split ("                                           ", "   ");
  count = 0;
  printf ("%p\n", res);
  while (res && res[count])
  {
    printf ("count[%d]: %s\n", count, res[count]);
    free (res[count++]);
  }
  free (res);
  res = ft_split ("                         ", "     ");
  count = 0;
  printf ("%p\n", res);
  while (res && res[count])
  {
    printf ("count[%d]: %s\n", count, res[count]);
    free (res[count++]);
  }
  free (res);
  res = ft_split ("0fnoU", "0fnoU");
  count = 0;
  printf ("%p\n", res);
  while (res && res[count])
  {
    printf ("count[%d]: %s\n", count, res[count]);
    free (res[count++]);
  }
  free (res);
  res = ft_split ("CV2qFU8GG        6mqYY9BGTVCV    LI oV4rgCRPsk9GQFedJQ", "Y52C");
  count = 0;
  printf ("%p\n", res);
  while (res && res[count])
  {
    printf ("count[%d]: %s\n", count, res[count]);
    free (res[count++]);
  }
  free (res);
  res = ft_split ("  gh  ", " gh");
  count = 0;
  printf ("%p\n", res);
  while (res && res[count])
  {
    printf ("count[%d]: %s\n", count, res[count]);
    free (res[count++]);
  }
  free (res);
}