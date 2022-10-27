/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoto-do <lsoto-do@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:54:01 by lsoto-do          #+#    #+#             */
/*   Updated: 2022/07/24 20:10:41 by lsoto-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ourlib.h"

void	ft_print_zero(char *k, char *dict)
{
	char	digit[2];
	int		l;

	l = 0;
	digit[0] = k[0];
	digit [1] = '\0';
	check_dict(digit, dict, l);
}

int	len_check(char*k)
{
	int	i;

	i = 0;
	while (k[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	writer(char*dict, int space_checker)
{
	int	i;

	i = 0;
	while (dict [i] < 'a' || dict [i] > 'z')
	{
		++i;
	}
	while (dict [i] >= 'a' && dict [i] <= 'z')
	{
		write(1, &dict[i], 1);
		++i;
	}
	if (space_checker > 1)
		write(1, " ", 1);
}

int	total_bytes(int argc, char **argv, char *str)
{
	char	arr[11];
	int		fd;
	int		bytes_read;
	int		total;

	if (argc == 2)
	str = "numbers.dict";
	else
		str = argv[1];
	bytes_read = 1;
	total = 0;
	fd = open(str, O_RDONLY);
	while (bytes_read > 0)
	{
		bytes_read = read(fd, arr, 1);
		total += bytes_read;
	}
	close(fd);
	return (total);
}

char	*dict_maker(int argc, char**argv)
{
	int		fd;
	char	*str;
	char	*content;
	int		total;

	str = "numbers.dict";
	total = total_bytes(argc, argv, str);
	fd = open(str, O_RDONLY);
	content = malloc((total + 1) * sizeof(char));
	read(fd, content, total);
	content[total] = 0;
	return (content);
}
