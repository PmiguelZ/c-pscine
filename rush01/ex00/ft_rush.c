/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcharles <xcharles@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:48:15 by xcharles          #+#    #+#             */
/*   Updated: 2022/07/16 16:56:23 by xcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_create_first_tab(int *tab_combination);
int	*ft_create_second_tab(int *tab_combination);
int	*ft_create_third_tab(int *tab_combination);
int	*ft_create_last_tab(int	*tab_combination);


void	ft_rush()
{
	int	tab_combination[4][11];

	ft_create_first_tab(tab_combination[0]);
	ft_create_second_tab(tab_combination[0]);
	ft_create_third_tab(tab_combination[0]);
	ft_create_last_tab(tab_combination[0]);
}
