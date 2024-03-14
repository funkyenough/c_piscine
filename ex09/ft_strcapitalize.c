/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:56:03 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/14 14:48:10 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	offset;
	int		first;
	char	*ptr;

	offset = 'a' - 'A';
	first = 1;
	ptr = str;
	while (*str != '\0')
	{
		if (!(('a' <= *str && *str <= 'z') || ('A' <= *str && *str <= 'Z')
				|| ('0' <= *str && *str <= '9')))
		{
			first = 1;
			str++;
			continue ;
		}
		if (first == 1 && ('a' <= *str && *str <= 'z'))
			*str -= offset;
		else if ('A' <= *str && *str <= 'Z' && first != 1)
			*str += offset;
		first = 0;
		str++;
	}
	return (ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str1[] = "␓i~JQm␎^>O␝␗St*FA␓e7␙s)␔y␚v␏␆";
// 	char str2[] = "NeZ␍_KomZHQDK-Af␌X␍t.#kYF>t<";
// 	char str3[] = "␞l0␆␖52c{9F␞";
// 	char str4[] = "G␞m␜fE␇folS>␡bW␜F␂D␋UHyw␕^}o[␄qt";
// 	char str5[] = "u␝1ozu<K%*␑␝T␕t/6O_nzo␛_␐8␋t";
// 	char str6[] = "ON<fM[t␛o0I]=␕@RT^/bI␆␂@dyyC";
// 	char str7[] = "ItR,I4r:%;0*2L*␎V!␝␘␏2Z␜l~␉␁e}&i";
// 	char str8[] = "hello, world!";
// 	char str9[] = "programming in c";
// 	char str10[] = "this is a test";
// 	char str11[] = "another test case";
// 	char str12[] = "lowercase and UPPERCASE";
// 	char str13[] = "1234567890";
// 	char str14[] = "special characters ~`!@#$%^&*()";

// 	printf("%s\n", ft_strcapitalize(str1));
// 	printf("%s\n", ft_strcapitalize(str2));
// 	printf("%s\n", ft_strcapitalize(str3));
// 	printf("%s\n", ft_strcapitalize(str4));
// 	printf("%s\n", ft_strcapitalize(str5));
// 	printf("%s\n", ft_strcapitalize(str6));
// 	printf("%s\n", ft_strcapitalize(str7));
// 	printf("%s\n", ft_strcapitalize(str8));
// 	printf("%s\n", ft_strcapitalize(str9));
// 	printf("%s\n", ft_strcapitalize(str10));
// 	printf("%s\n", ft_strcapitalize(str11));
// 	printf("%s\n", ft_strcapitalize(str12));
// 	printf("%s\n", ft_strcapitalize(str13));
// 	printf("%s\n", ft_strcapitalize(str14));
// }