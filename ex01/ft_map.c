#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int *arr;
	int i;

	i = 0;
	arr = (int *)malloc(length * sizeof(int));
	if (arr == NULL)
		return NULL;
	while (i < length)
		arr[i++] = (*f)(*tab++);
	return arr;
}

// #include <limits.h>
// #include <unistd.h>
// #include <stdio.h>

// int ret_nbr(int i)
// {
// 	return i * 2;
// }

// int	main(void)
// {
// 	int arr[3] = {1, 2 ,3};
// 	int *ret;

// 	ret = ft_map(arr, 3, &ret_nbr);

// 	for (int i = 0; i < 3; i++)
// 		printf("%d\n", *ret++);

// 	return 0;
// }