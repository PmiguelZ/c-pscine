/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:10:39 by paalvare          #+#    #+#             */
/*   Updated: 2022/07/23 23:18:52 by paalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	count;
	int	rev;

	rev = size - 1;
	count = 0;
	while (count < (size / 2))
	{
		temp = tab[count];
		tab[count] = tab[rev];
		tab[rev] = temp;
		count++;
		rev--;
	}
}
/*
int main(void)
{
	int tab[] = {1, 2, 3, 4};
	int size = 4;
	int c;

	c = 0;
	ft_rev_int_tab(tab, size);
	while (c < size)
	{
		printf("%d", tab[c]);
		c++;
	}
}*/
