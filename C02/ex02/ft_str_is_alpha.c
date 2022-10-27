/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:57:36 by paalvare          #+#    #+#             */
/*   Updated: 2022/07/28 18:55:43 by paalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || \
					(str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char str[] = "d6ahk";
	ft_str_is_alpha(str);
	printf("%d\n", ft_str_is_alpha(str));
}
*/
