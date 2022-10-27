/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:10:57 by paalvare          #+#    #+#             */
/*   Updated: 2022/07/20 19:53:35 by paalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 2;
	ft_div_mod( a, b, &div, &mod);
	printf("la division es: %d y el resto es: %d", div, mod);
	return(0);
}*/
