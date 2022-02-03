/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdrouin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:22:12 by mdrouin           #+#    #+#             */
/*   Updated: 2022/01/30 16:43:18 by mdrouin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FONCTIONS_H
# define FONCTIONS_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

void	putstr(char *str);
void	split_tab(char *str);
void	ft_putstr(char *str);
int		ft_check_args(int argc, char **argv);
int		ft_str_is_numeric(char *str);
int		max_int(char *str);
int		ft_strlen(char *str);
int		split(char *str);
int		check_9(char *str);
int		check_8(char *str);
int		check_7(char *str);
int		check_6(char *str);
int		check_5(char *str);
int		check_4(char *str);
int		check_3(char *str);
int		check_2(char *str);
int		check_1(char *str);
int		check_0(char *str);
int		ft_magic(char *str);
int		error_fic(int fd);
int		error_malloc(char *malloc_to_free);

#endif
