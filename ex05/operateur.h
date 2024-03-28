/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operateur.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:02:46 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/28 16:02:47 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATEUR_H
# define OPERATEUR_H

# include <unistd.h>

int		ft_add(int a, int b);

int		ft_sub(int a, int b);

int		ft_mul(int a, int b);

int		ft_div(int a, int b);

int		ft_mod(int a, int b);

int		ft_atoi(char *str);

int		ft_strlen(char *str);

void	ft_putnbr(int nb);

#endif