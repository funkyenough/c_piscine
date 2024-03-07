#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*mod = a % b;
	*div = (a - *mod) / b;
}

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 16;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("div = %d, mod = %d", div, mod);
	return(0);
}