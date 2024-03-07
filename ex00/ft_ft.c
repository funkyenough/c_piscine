#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int num;
	printf("Before: num = %d\n", num);
	printf("Before address: num = %p\n", &num);


	ft_ft(&num);
	printf("After: num = %d\n", num);

	return(0);
}
