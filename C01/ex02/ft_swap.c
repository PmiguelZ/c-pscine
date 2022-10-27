/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:48:17 by paalvare          #+#    #+#             */
/*   Updated: 2022/07/21 15:45:02 by paalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	intra;

	intra = *a;
	*a = *b;
	*b = intra;
}
/*
int main (void)
{
	int a;
	int	b;

	a = 20;
	b = 30;
	ft_swap(&a, &b);
	printf("el valor es:%d y %d", a, b);
}*/
