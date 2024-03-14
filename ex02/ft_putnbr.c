#include <limits.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_recursion(int nb)
{
	char	mod;

	if (nb != 0)
	{
		mod = nb % 10 + '0';
		ft_putnbr_recursion(nb / 10);
		write(1, &mod, 1);
	}
}
void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, &"-", 1);
		nb = -nb;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	ft_putnbr_recursion(nb);
}

void	helper(int i)
{
	ft_putnbr(i);
	printf("\n");
}
int	main(void)
{
	helper(INT_MAX);
	helper(INT_MIN);
	helper(0);
	helper(1);
	helper(-1);
	helper(123456789);
	helper(-123456789);
	helper(10);
	helper(-10);
	helper(1000000000);
	helper(-1000000000);
}