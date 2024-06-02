#include <unistd.h>

char	ft_mod(int nb)
{
 return nb % 10 + '0';
}

void	ft_putnbr(int nb)
{
	char number[10];
	int i;

	i = 0;
	while (nb > 0)
	{
	number[9-i] = ft_mod(nb);
	nb /= 10;
	i++;
	}
	write(1,number,10);
}

// We will then write a function that mods the number in a while loop and store the char associated with the number
// in the loop
// If there are more space then digits, then pad the digits with \0
#include <stdio.h>
int	main(void)
{
	int nb;

	nb = 1;
	ft_putnbr(nb);
	printf("The size of nb is: %lu, and the value of nb is %d", sizeof(nb), nb);

	return (0);
}