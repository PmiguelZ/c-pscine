/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcharles <xcharles@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 05:19:29 by xcharles          #+#    #+#             */
/*   Updated: 2022/07/16 15:48:39 by xcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	*ft_create_first_tab(int *tab_combination)
{
	tab_combination[0] = 4123;
	tab_combination[1] = 4132;
	tab_combination[2] = 4231;
	tab_combination[3] = 4213;
	tab_combination[4] = 4321;
	tab_combination[5] = 4312;
	return (tab_combination);
}

int	*ft_create_second_tab(int *tab_combination)
{
	tab_combination[0] = 1423;
	tab_combination[1] = 1432;
	tab_combination[2] = 2143;
	tab_combination[3] = 2413;
	tab_combination[4] = 2431;
	tab_combination[5] = 3142;
	tab_combination[6] = 3124;
	tab_combination[7] = 3214;
	tab_combination[8] = 3241;
	tab_combination[9] = 3412;
	tab_combination[10] = 3421;
	return (tab_combinaison);
}

int	*ft_create_third_tab(int *tab_combination)
{
	tab_combination[0] = 1243;
	tab_combination[1] = 1342;
	tab_combination[2] = 1324;
	tab_combination[3] = 2134;
	tab_combination[4] = 2314;
	tab_combination[5] = 2341;
	return (tab_combination);
}

int	*ft_create_last_tab(int	*tab_combination)
{
	tab_combination[0] = 1234;
	return (tab_combination);
}
