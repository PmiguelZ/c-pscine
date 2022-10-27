/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 22:49:21 by paalvare          #+#    #+#             */
/*   Updated: 2022/07/28 22:22:02 by paalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A') && (str[i] <= 'Z')))
			return (0);
		else
			i++;
	}
	return (1);
}
/*
int main(void)
{
	char str[] = "alv";
	ft_str_uppercase(str);
	printf("%d\n", ft_str_uppercase(str));
}
*/
