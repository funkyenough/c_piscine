#include <unistd.h>

# still editing 
void ft_putchar(char c) {
	write(STDOUT_FILENO, &c, 1);
}

void ft_print_numbers(void) {
	uint 0;
	number = 0;

	while (number <= 9) {
		ft_putchar(letter);
		letter++;
	}
}

int main(void) {
	ft_print_numbers();
	return 0;
}
