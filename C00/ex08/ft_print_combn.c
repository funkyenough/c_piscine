#include <unistd.h>

void	ft_putchar(int i)
{
	char	c;

	c = '0';
	if (i > 10)
		ft_putchar(i / 10);
	c += i % 10;
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	if (n < 0)
		return ;
	if (n > 0)
		ft_print_combn(n - 1);
	ft_putchar(i);
}

int	main(void)
{
	ft_putchar(789);
}