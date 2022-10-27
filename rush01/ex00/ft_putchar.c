/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcharles <xcharles@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:48:53 by xcharles          #+#    #+#             */
/*   Updated: 2022/07/16 16:56:09 by xcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// (start_str) is where we need to start and (index) the index of the combination
char *ft_putchar(int *tab_combination, char *str, int start_str, int index)
{
	int nb;

	nb = tab_combination[size_b];
	str[size] = nb / 1000 + '0';
	nb = nb - ((nb / 1000) 1000);	
	str[size + 1] = nb / 100 + '0';
	nb = nb - ((nb / 100) 100);
	str[size + 2] = nb / 10 + '0';
	nb = nb - ((nb / 10) 10);
	str[size + 3] =  nb + '0';
}
