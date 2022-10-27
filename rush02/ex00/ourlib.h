/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ourlib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoto-do <lsoto-do@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:47:24 by lsoto-do          #+#    #+#             */
/*   Updated: 2022/07/24 20:06:57 by lsoto-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OURLIB_H
# define OURLIB_H
# include<fcntl.h>
# include<unistd.h>
# include<stdlib.h>
# include<stdio.h>

void	check_third_pos(char s1, char*dict, int k);
void	check_digit(char s1, char*dict, int k);
void	create_magnitude(int len, int i, char*dict, int k);
void	check_doubledigit(char*double_digit, char*dict, int k);
void	writer(char*dict, int k);
int		len_check(char*k);
void	check_number(char*k, int len, int i, char*dict);
char	*dict_maker(int argc, char**argv);
void	check_dict(char*s1, char*dict, int k);
int		check_argument(char*array);
int		ft_check(int argc, char**argv);
int		total_bytes(int argc, char **argv, char *str);
void	ft_print_zero(char *k, char *dict);

#endif
