#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_recursion(unsigned long long nbr, char *str, int digit)
{
	if (nbr >= 16 || digit == 0)
	{
		ft_putnbr_recursion(nbr / 16, str, digit--);
		ft_putnbr_recursion(nbr % 16, str, digit);
	}
	else
		if (nbr == 0)
			write(1, &"0", 1);
		else
			write(1, &str[nbr], 1);
}

void	ft_putnbr_hex(unsigned long long nbr)
{
	char	*base;
	int		digit;

	base = "0123456789abcdef";
	digit = 16;
	ft_putnbr_recursion(nbr, base, digit);
}

void ft_print_address(unsigned long long addr)
{
	ft_putnbr_hex(addr);
}

void *ft_print_memory(void *addr)
{
	printf("%p\n", addr);
	printf("%llu\n", (unsigned long long)addr);

	ft_print_address((unsigned long long)addr);
	return addr;
}

int	main(void)
{
	char str[] = "Hello, World!";

	ft_print_memory(str);
}