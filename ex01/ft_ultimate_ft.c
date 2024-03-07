#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int num;
	printf("Before value: %d\n", num);
	printf("Before address: %p\n", &num);

	int *p1 = &num;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	printf("Before: %p\n", p1);
	printf("Before: %p\n", p2);
	printf("Before: %p\n", p3);
	printf("Before: %p\n", p4);
	printf("Before: %p\n", p5);
	printf("Before: %p\n", p6);
	printf("Before: %p\n", p7);
	printf("Before: %p\n", p8);

	ft_ultimate_ft(&p8);
	printf("After value: %d\n", num);

	return(0);
}
