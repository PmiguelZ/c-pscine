/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoto-do <lsoto-do@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:52:13 by lsoto-do          #+#    #+#             */
/*   Updated: 2022/07/24 20:05:55 by lsoto-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ourlib.h"

int	main(int argc, char **argv)
{
	int		i;
	int		len;
	char	*dict_pointer;
	int		l;

	l = argc - 1;
	i = 0;
	if (!(ft_check(argc, argv)))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	len = len_check(argv[l]);
	dict_pointer = dict_maker(argc, argv);
	if (len < 2 && argv[l][0] == '0')
		ft_print_zero(argv[l], dict_pointer);
	else
		check_number(argv[l], len, i, dict_pointer);
	free(dict_pointer);
	return (0);
}
