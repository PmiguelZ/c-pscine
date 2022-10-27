/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:45:34 by paalvare          #+#    #+#             */
/*   Updated: 2022/07/23 23:22:02 by paalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	count_one;
	int	count;
	int	rev;

	count = 0;
	rev = size - 1;
	while (count < rev)
	{
		if (tab[count] > tab[count + 1])
		{
			temp = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = temp;
			count = 0;
		}
		else
		{
			count++;
		}
	}
}
/*
int main(void)
{
    int tab[] = {3, 2, 4, 1};
	int size = 4;
    int c;

    c = 0;
    ft_sort_int_tab(tab, size);
	while (c < size)
    {
        printf("%d", tab[c]);
        c++;
    }
}*/
