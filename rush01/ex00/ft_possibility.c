/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_possibility.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcharles <xcharles@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:57:03 by xcharles          #+#    #+#             */
/*   Updated: 2022/07/16 17:22:09 by xcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_possibilty(char *str_input, char *str_output, int *tab_combination)
{
	int index;
	int i;

	i = 9;
	while(i <= 12)
	{	
		if (str_input[i] == '4')
		{
			index = 3;
			ft_putchar();
		}
		else if (str_input[i] == '3')
		{
			index = 2;
			ft_putchar();
		}
		else if	(str_input[i] == '2')
		{
			index = 1;
			ft_putchar();
		}
		else
		{
			index = 0;
			ft_putchar();
		}
		i++;
}
