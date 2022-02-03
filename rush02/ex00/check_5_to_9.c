/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_5_to_9.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdrouin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:21:57 by mdrouin           #+#    #+#             */
/*   Updated: 2022/01/30 16:21:58 by mdrouin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fonctions.h"

int	check_5(char *str)
{
	if (str[5] > '6')
		return (1);
	if (str[5] == '6')
		if (check_6(str))
			return (1);
	return (0);
	if (str[5] < '6')
		return (0);
}

int	check_6(char *str)
{
	if (str[6] > '7')
		return (1);
	if (str[6] == '7')
		if (check_7(str))
			return (1);
	return (0);
	if (str[6] < '7')
		return (0);
}

int	check_7(char *str)
{
	if (str[7] > '2')
		return (1);
	if (str[7] == '2')
		if (check_8(str))
			return (1);
	return (0);
	if (str[7] < '2')
		return (0);
}

int	check_8(char *str)
{
	if (str[8] > '9')
		return (1);
	if (str[8] == '9')
		if (check_9(str))
			return (1);
	return (0);
	if (str[8] < '9')
		return (0);
}

int	check_9(char *str)
{
	if (str[9] > '5')
		return (1);
	if (str[9] == '5')
		return (0);
	if (str[9] < '5')
		return (0);
	return (0);
}
