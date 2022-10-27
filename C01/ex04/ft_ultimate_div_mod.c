/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:56:51 by paalvare          #+#    #+#             */
/*   Updated: 2022/07/23 23:25:58 by paalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	res;

	div = *a / *b;
	res = *a % *b;
	*b = res;
	*a = div;
}
/*
int main (void)
{
	int b;
	int a;

	a = 10;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d", a, b );
}*/
