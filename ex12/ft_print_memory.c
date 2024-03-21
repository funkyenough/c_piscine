#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_recursion(unsigned long long nbr, char *base, int digit)
{
	if (digit > 0)
	{
		ft_putnbr_recursion(nbr / 16, base, digit - 1);
		write(1, &base[nbr % 16], 1);
	}
	else if (digit == 0 && nbr == 0)
		write(1, &"0", 1);
}

void	ft_putnbr_hex(unsigned long long nbr)
{
	char	*base;
	int		digit;

	base = "0123456789abcdef";
	digit = 16;
	ft_putnbr_recursion(nbr, base, digit);
}

void	ft_print_address(unsigned long long addr)
{
	ft_putnbr_hex(addr);
}

void	*ft_print_memory(void *addr)
{
	printf("integer %llu\n", (unsigned long long)addr);
	printf("address %p\n", addr);
	ft_print_address((unsigned long long)addr);
	return (addr);
}

int	main(void)
{
	char str[] = "Hello, World!";

	ft_print_memory(str);
}