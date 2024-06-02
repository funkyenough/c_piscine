/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:41:52 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/27 12:53:40 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	fd;
	char str[1];

	if (argv[1] == NULL)
	{
		write(1, "File name missing.", 19);
		return 1;
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.", 20);
		return 2;
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.", 18);
		return 3;
	}
	while (read(fd, str, 1))
		write(1, str, 1);
	close(fd);
	return 0;

}