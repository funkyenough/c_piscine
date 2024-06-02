void	ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int tmp;

    i = 0;
    while (i < size - 1)
    {
		j = 0;
        while (j < size - i - 1)
        {
            if (tab[j] > tab[j + 1])
            {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
            j++;
        }
        i++;
    }
}

#include <stdio.h>
void print_array(int *tab, int size) {
    int i = 0;
	while (i < size)
	{
        printf("%d", tab[i]);
		i++;
    }
    printf("\n");
}

int	main(void)
{
	int size = 4;
	int tab[4] = {6, 3, 0, 5};

	printf("Order Before: ");
	print_array(tab, size);

	ft_sort_int_tab(tab, size);

	printf("Order After: ");
	print_array(tab, size);
	return (0);
	}

