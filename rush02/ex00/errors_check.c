/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoto-do <lsoto-do@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:28:55 by lsoto-do          #+#    #+#             */
/*   Updated: 2022/07/24 19:43:29 by ageiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_argument(char*array)
{
	int	i;
	int	check;

	check = 1;
	i = 0;
	while (array[i] != '\0')
	{
		if (!(array[i] >= '0' && array[i] <= '9'))
		{
			check = 0;
			return (check);
		}
		++i;
	}
	return (check);
}

int	ft_check(int argc, char**argv)
{
	if (argc == 2 && check_argument(argv[1]))
		return (1);
	else if (argc == 3 && check_argument(argv[2]))
		return (1);
	else
		return (0);
}
