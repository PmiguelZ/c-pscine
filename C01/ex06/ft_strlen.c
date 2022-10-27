/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:03:11 by paalvare          #+#    #+#             */
/*   Updated: 2022/07/22 16:55:18 by paalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{	
		i++;
	}
	return (i);
}
/*
int main (void)
{
	
	char *str;
	int b;
	
	str = "hola";
	b = ft_strlen(str);
	printf("%d", b);
	return(0);
}*/
