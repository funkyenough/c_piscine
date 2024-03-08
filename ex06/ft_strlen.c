/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:04:47 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/08 10:32:38 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
// #include <stdio.h>
// int	main(void) {
// 	char str[] = "Hello, World!";
// 	printf("String Address is: %p\n", str);
// 	printf("String content is: %d\n", *str);
// 	ft_strlen(str);
// 	printf("String Length is: %d\n", ft_strlen(str));
// 	return 0;
// }