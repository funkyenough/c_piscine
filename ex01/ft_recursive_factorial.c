int	ft_recursive_factorial(int nb)
{
	if (nb > 0)
		ft_recursive_factorial(nb--);
}