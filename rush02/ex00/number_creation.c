/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_creation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoto-do <lsoto-do@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:24:35 by lsoto-do          #+#    #+#             */
/*   Updated: 2022/07/24 19:31:56 by lsoto-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ourlib.h"

void	check_doubledigit(char*double_digit, char*dict, int k)
{
	char	d_digit_array [3];

	if (double_digit[0] == '1')
	{
	d_digit_array[0] = double_digit[0];
	d_digit_array[1] = double_digit[1];
	d_digit_array[2] = '\0';
	}
	else
	{
		d_digit_array[0] = double_digit[0];
	d_digit_array[1] = '0';
	d_digit_array[2] = '\0';
	}
	check_dict (d_digit_array, dict, k);
}

void	check_digit(char s1, char*dict, int k)
{
	char	digit[2];

	digit[0] = s1;
	digit [1] = '\0';
	check_dict(digit, dict, k);
}

void	check_third_pos(char s1, char*dict, int k)
{
	char	hundred[4];

	check_digit(s1, dict, k);
	hundred[0] = '1';
	hundred[1] = '0';
	hundred[2] = '0';
	hundred[3] = '\0';
	check_dict(hundred, dict, k);
}

void	create_magnitude(int len, int i, char*dict, int l)
{
	int		k;
	char	*m;

	k = 0;
	m = malloc ((len - i) + 1);
	while (k < (len - i))
	{
		m[k] = '0';
		k++;
	}
	m[0] = '1';
	m[k] = '\0';
	check_dict(m, dict, l);
	free(m);
}
