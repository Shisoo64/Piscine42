/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dizainze.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 01:06:01 by rlaforge          #+#    #+#             */
/*   Updated: 2022/01/30 17:29:43 by cmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonctions.h"

int	search_convert_print(char *search);

int	dizainze_uno(char *str)
{
	char	buf[3];

	if (str[1] == '1')
	{
		buf[0] = str[1];
		buf[1] = str[2];
		buf[2] = '\0';
		search_convert_print(buf);
		return (1);
	}
	return (0);
}

int	dizainze_dos(char *str)
{
	char	buf[3];

	if (str[1] != '0' && str[1] != '1' && str[2] == '0')
	{
		buf[0] = str[1];
		buf[1] = '0';
		buf[2] = '\0';
		search_convert_print(buf);
		return (1);
	}
	return (0);
}

int	dizainze_tres(char *str)
{
	char	buf[3];
	char	bufos[2];

	bufos[0] = str[2];
	bufos[1] = '\0';
	if (str[1] != '0' && str[1] != '1' && str[2] != '0')
	{
		buf[0] = str[1];
		buf[1] = '0';
		buf[2] = '\0';
		search_convert_print(buf);
		write(1, "-", 1);
		search_convert_print(bufos);
		return (1);
	}
	return (0);
}

int	dizaine_and_unit(char *str)
{
	char	bufos[2];

	bufos[0] = str[2];
	bufos[1] = '\0';
	if (dizainze_uno(str))
		return (1);
	else if (dizainze_dos(str))
		return (1);
	else if (dizainze_tres(str))
		return (1);
	else if (str[1] == '0' && str[2] != '0')
	{
		search_convert_print(bufos);
		return (1);
	}
	return (0);
}
