/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:06:38 by paalvare          #+#    #+#             */
/*   Updated: 2022/07/28 19:16:14 by paalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		else
			i++;
	}
	return (1);
}
/*
int main(void)
{
	char str[] = "";
	ft_str_is_printable(str);
	printf("%d\n", ft_str_is_printable(str));
}
*/
