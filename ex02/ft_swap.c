#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int c;

	// 
	// c has the value of a
	c = *a;

	// a has the value of b
	*a = *b;

	// b to have the value of a
	*b = c;
}

int	main(void)
{
	int a;
	int b;
	printf("Initial value: a = %d, b = %d\n", a, b);

	a = 1;
	b = 2;
	printf("Before value: a = %d, b = %d\n", a, b);

	ft_swap(&a, &b);
	printf("After value: a = %d, b = %d\n", a, b);
	return(0);
}