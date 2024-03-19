/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:58:53 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/19 17:59:47 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_BOOLEAN_H_
# define _FT_BOOLEAN_H_

# define TRUE 1
# define FALSE 0
# define SUCCESS 0

typedef int	t_bool;
char		EVEN_MSG[36] = "I have an even number of arguments.";
char		ODD_MSG[35] = "I have an odd number of arguments.";

t_bool	EVEN(int number)
{
	if (number % 2 == 0)
		return (TRUE);
	else
		return (FALSE);
}

#endif
