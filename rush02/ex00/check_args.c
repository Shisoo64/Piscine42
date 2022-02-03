/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdrouin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:22:04 by mdrouin           #+#    #+#             */
/*   Updated: 2022/01/30 16:22:04 by mdrouin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fonctions.h"

int	ft_check_args(int argc, char **argv)
{
	if ((argc < 2) || (argc > 3))
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (argc == 2)
	{
		if (ft_str_is_numeric(argv[1]) == 1)
			return (1);
		if (max_int(argv[1]) == 1)
			return (1);
		return (2);
	}
	if (argc == 3)
	{
		if (ft_str_is_numeric(argv[2]) == 1)
			return (1);
		if (max_int(argv[2]) == 1)
			return (1);
		return (3);
	}
	return (0);
}

int	max_int(char *str)
{
	int	size;

	size = ft_strlen(str);
	if (size > 10)
	{
		ft_putstr("Error\n");
		return (1);
	}
	else if (size == 10)
	{
		if (check_0(str))
		{
			ft_putstr("Error\n");
			return (1);
		}
		return (0);
	}
	else
		return (0);
}
