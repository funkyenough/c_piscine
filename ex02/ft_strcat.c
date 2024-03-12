void	print_helper(char *str);
int		str_len(char *str);

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	src_len;
	int	dest_len;

	count = 0;
	src_len = str_len(src);
	dest_len = str_len(dest);
	while (src[count] != 0)
	{
		dest[dest_len + count] = src[count];
		count++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}
void	print_helper(char *str)
{
	int	i;
	int	len;

	len = str_len(str);
	i = 0;
	while (str[i] != 0)
	{
		printf("%02X ", str[i]);
		i++;
	}
	printf(" || %02X\n\n", str[i++]);
}

int	main(void)
{
	char	dest[30] = "Hello, ";
	char	src[] = "World!";
	char	*str;
	char	ft_dest[30] = "Hello, ";
	char	ft_src[] = "World!";
	char	*ft_str;

	ft_str = ft_strcat(ft_dest, ft_src);
	str = strcat(dest, src);
	printf("Output of strcat is: %s\n", str);
	print_helper(str);
	printf("Output of ft_strcat is: %s\n", ft_str);
	print_helper(ft_str);
}
