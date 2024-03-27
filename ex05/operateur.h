#ifndef OPERATEUR_H
# define OPERATEUR_H

#include <unistd.h>

# define ADD 0
# define SUB 1
# define MUL 2
# define DIV 3
# define MOD 4

int	ft_add(int a, int b);

int	ft_sub(int a, int b);

int	ft_mul(int a, int b);

int	ft_div(int a, int b);

int	ft_mod(int a, int b);

int	ft_atoi(char *str);

int ft_strlen(char *str);

#endif