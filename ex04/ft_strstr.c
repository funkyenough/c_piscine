
// The strstr() function returns a pointer to
// the beginning of the first occurrence of string2 in string1.
// If string2 does not appear in string1,
// the strstr() function returns NULL.
// If string2 points to a string with zero length,
// the strstr() function returns string1.
char	*ft_strstr(char *str, char *to_find)
{
	char	*start;
	char	*needle;

	needle = to_find;
	if (to_find == 0)
		return (str);
	while (*str != 0)
	{
		if (*str != *to_find)
		{
			str++;
			continue ;
		}
		start = str;
		while (1)
		{
			if (*++start != *++needle)
			{
				if (*needle == 0)
					return (str);
				str = start;
				break ;
			}
		}
		needle = to_find;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "Hello, World!";
	char to_find[] = "orl";

	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
}