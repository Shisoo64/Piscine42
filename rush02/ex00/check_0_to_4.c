/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_0_to_4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdrouin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:21:47 by mdrouin           #+#    #+#             */
/*   Updated: 2022/01/30 16:21:51 by mdrouin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fonctions.h"

int	check_0(char *str)
{
	if (str[0] > '4')
		return (1);
	if (str[0] == '4')
		if (check_1(str))
			return (1);
	return (0);
	if (str[0] < '4')
		return (0);
}

int	check_1(char *str)
{
	if (str[1] > '2')
		return (1);
	if (str[1] == '2')
		if (check_2(str))
			return (1);
	return (0);
	if (str[1] < '2')
		return (0);
}

int	check_2(char *str)
{
	if (str[2] > '9')
		return (1);
	if (str[2] == '9')
		if (check_3(str))
			return (1);
	return (0);
	if (str[2] < '9')
		return (0);
}

int	check_3(char *str)
{
	if (str[3] > '4')
		return (1);
	if (str[3] == '4')
		if (check_4(str))
			return (1);
	return (0);
	if (str[3] < '4')
		return (0);
}

int	check_4(char *str)
{
	if (str[4] > '9')
		return (1);
	if (str[4] == '9')
		if (check_5(str))
			return (1);
	return (0);
	if (str[4] < '9')
		return (0);
}
