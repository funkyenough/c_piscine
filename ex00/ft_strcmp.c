/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 21:35:37 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/12 12:03:55 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (!(*s1 == 0 || *s2 == 0))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char s1[] = "abcde";
// 	char s2[] = "Abcde";
// 	char s3[] = "aBcde";
// 	char s4[] = "abCde";
// 	char s5[] = "abcDe";
// 	char s6[] = "abcdE";
// 	char s7[] = "abcde";

// 	printf("s1 diff s2: %d ", ft_strcmp(s1, s2));
// 	printf("%d\n", strcmp(s1, s2));
// 	printf("s1 diff s3: %d ", ft_strcmp(s1, s3));
// 	printf("%d\n", strcmp(s1, s3));
// 	printf("s1 diff s4: %d ", ft_strcmp(s1, s4));
// 	printf("%d\n", strcmp(s1, s4));
// 	printf("s1 diff s5: %d ", ft_strcmp(s1, s5));
// 	printf("%d\n", strcmp(s1, s5));
// 	printf("s1 diff s6: %d ", ft_strcmp(s1, s6));
// 	printf("%d\n", strcmp(s1, s6));
// 	printf("s1 diff s7: %d ", ft_strcmp(s1, s7));
// 	printf("%d\n", strcmp(s1, s7));
// }