unsigned int	ft_str_len(char *str);

// unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
// {
// 	int	dest_len;

// 	dest_len = ft_str_len(dest);
// 	while ()
// 		return (ft_str_len(src) + ft_str_len(dest));
// }

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
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char ft_dest[10] = "Hello, ";
// 	char ft_src[7] = "World!";
// 	unsigned int size = 10;

// 	// printf("%d", ft_strlcat(ft_dest, ft_src, size));
// 	printf("%lu", strlcat(ft_dest, ft_src, size));
// 	printf("%s", ft_dest);

// 	return (0);
// }