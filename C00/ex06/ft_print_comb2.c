/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:46:41 by paalvare          #+#    #+#             */
/*   Updated: 2022/07/19 20:02:18 by paalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	p1;
	char	p2;

	p1 = 0;
	while (p1 <= 98)
	{
		p2 = p1 + 1;
		while (p2 <= 99)
		{
			ft_putchar(p1 / 10 + '0');
			ft_putchar(p1 % 10 + '0');
			write(1, " ", 1);
			ft_putchar(p2 / 10 + '0');
			ft_putchar(p2 % 10 + '0');
			if (p1 != 98)
			{
				write(1, ", ", 2);
			}
			p2++;
		}
		p1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
