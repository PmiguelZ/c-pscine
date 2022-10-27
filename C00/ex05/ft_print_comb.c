/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:37:17 by paalvare          #+#    #+#             */
/*   Updated: 2022/07/17 22:16:08 by paalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_new(char primero, char segundo, char tercero)
{
	ft_putchar(primero);
	ft_putchar(segundo);
	ft_putchar(tercero);
}

void	ft_print_comb(void)
{
	char	primero;
	char	segundo;
	char	tercero;

	primero = '0';
	while (primero <= '7')
	{
		segundo = primero + 1;
		while (segundo <= '8')
		{
			tercero = segundo + 1;
			while (tercero <= '9')
			{
				ft_new(primero, segundo, tercero);
				tercero++;
				if (primero != '7')
				{
					write(1, ", ", 2);
				}
			}
		segundo++;
		}
	primero++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
