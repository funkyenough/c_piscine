/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:38:46 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/21 20:19:31 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_recursion(long nbr, char *str)
{
	if (nbr >= 16)
	{
		ft_putnbr_recursion(nbr / 16, str);
		ft_putnbr_recursion(nbr % 16, str);
	}
	else
		write(1, &str[nbr], 1);
}

void	ft_putnbr_hex(int nbr)
{
	char 	*base;

	base = "0123456789abcdef";
	ft_putnbr_recursion(nbr, base);
}


void	ft_putstr_non_printable(char *str)
{

	while(*str)
	{
		if (!(' ' <= *str && *str <= '~'))
		{
			write(1, &"\\", 1);
			ft_putnbr_hex((int)*str);
		}
		else
			write(1, str, 1);
		str++;
	}
}

// int	main(void)
// {
// 	char	str[] = "Hello,\x7fWorld.";

// 	ft_putstr_non_printable(str);
// 	return (0);
// }
