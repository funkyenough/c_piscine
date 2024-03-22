/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:20:46 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/22 11:21:43 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#define ADDR_DIGIT 16
#define CHAR_DIGIT 2

void	ft_putnbr_recursion(unsigned long long nbr, int digit, int *len,
		char *buf, int flag)
{
	char	*base;

	base = "0123456789abcdef";
	if (digit > 0)
	{
		ft_putnbr_recursion(nbr / 16, digit - 1, len, buf, flag);
		buf[(*len)++] = base[nbr % 16];
		if ((*len - 4) % 5 == 0 && flag == 1)
			buf[(*len)++] = '\x20';
	}
}

void	ft_putnbr_hex(unsigned long long nbr)
{
	char	buf[40];
	int		len;
	int		flag;

	len = 0;
	flag = 0;
	ft_putnbr_recursion(nbr, ADDR_DIGIT, &len, buf, flag);
	buf[len] = '\0';
	write(1, buf, len);
}

void	ft_putstr_hex(char *addr)
{
	char	buf[41];
	int		len;
	int		flag;

	len = 0;
	flag = 1;
	while (*addr)
	{
		ft_putnbr_recursion((unsigned long long)*addr, CHAR_DIGIT, &len, buf,
			flag);
		addr++;
	}
	buf[len] = '\0';
	write(1, buf, len);
}

void	ft_putstr(char *addr)
{
	while (*addr)
	{
		write(1, addr, 1);
		addr++;
	}
}

void	*ft_print_memory(void *addr)
{
	ft_putnbr_hex((unsigned long long)addr);
	write(1, ": ", 2);
	ft_putstr_hex((char *)addr);
	// write(1, "\n", 1);
	ft_putstr((char *)addr);
	write(1, "\n", 1);
	return (addr);
}

// int	main(void)
// {
// 	char str[] = "Hello, World!   ";
// 	// void *ptr = (void *)0xbcab8885253f6531;

// 	ft_print_memory(str);
// }