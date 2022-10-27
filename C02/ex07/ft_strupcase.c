/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:46:54 by paalvare          #+#    #+#             */
/*   Updated: 2022/07/28 15:05:08 by paalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else
			i++;
	}
	return (str);
}
/*
int main(void)
{
	char str[] = "hola";
	ft_strupcase(str);
	printf("%s\n", ft_strupcase(str));
}
*/
