/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdrouin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:22:18 by mdrouin           #+#    #+#             */
/*   Updated: 2022/01/30 16:22:19 by mdrouin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fonctions.h"

int	main(int argc, char **argv)
{
	if (ft_check_args(argc, argv) == 1)
		return (1);
	if (ft_check_args(argc, argv) == 2)
	{
		split_tab(argv[1]);
	}
	if (ft_check_args(argc, argv) == 3)
	{
		split_tab(argv[2]);
	}
	return (0);
}
