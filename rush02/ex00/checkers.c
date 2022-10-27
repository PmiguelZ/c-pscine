/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoto-do <lsoto-do@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:30:34 by lsoto-do          #+#    #+#             */
/*   Updated: 2022/07/24 20:11:15 by lsoto-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ourlib.h"

void	check_number(char*k, int len, int i, char*dict)
{
	while (k[i] != '\0')
	{
		if (((len - i) % 3 == 0) && k[i] != '0')
			check_third_pos(k[i], dict, (len - i));
		else if ((len - i) % 3 == 1)
		{
			if (k[i] != '0')
				check_digit(k[i], dict, (len - i));
			if ((len - i) != 1)
				create_magnitude (len, i, dict, (len - i));
		}
		else if ((len - i) % 3 == 2 && k[i] != '0')
		{
			check_doubledigit (&k[i], dict, (len - i));
			if (k[i] == '1')
			{
				i++;
				if (len - i != 1)
					create_magnitude (len, i, dict, (len - i));
			}
		}
		i++;
	}
}

void	check_dict(char*s1, char*dict, int k)
{
	int	i;
	int	j;

	i = 0;
	while (dict [i] != '\0' )
	{
		j = 0;
		while (dict [i + j] != '\0' && dict [i + j] == s1 [j])
		{
			if (s1[j + 1] == '\0')
			{
				writer(&dict[i], k);
				return ;
			}
			++j;
		}
		++i;
	}
	if (dict[i - 1] == '\0')
	{
		write (1, "Dict Error\n", 11);
		return ;
	}
}
