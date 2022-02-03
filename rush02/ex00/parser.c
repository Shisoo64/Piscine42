/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 02:24:16 by rlaforge          #+#    #+#             */
/*   Updated: 2022/01/30 17:55:20 by mdrouin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonctions.h"

int		aff_triple(char *str);
void	dinguerie(char sign);
int		search_convert_print(char *search);

int	checkzero(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '0' && str[i] != '-' && str[i] != '+' && str[i] != '.')
			return (0);
		i++;
	}
	search_convert_print("0");
	return (1);
}

int	parse(char *str)
{
	char	strbuf[3];
	int		i;
	int		n;

	i = 0;
	strbuf[0] = 0;
	strbuf[1] = 0;
	strbuf[2] = 0;
	checkzero(str);
	while (str[i] != '\0')
	{
		n = 0;
		if (i != 0)
			i++ ;
		while (str[i] >= '0' && str[i] <= '9' && n < 3)
		{
			strbuf[n] = str[i];
			n++;
			i++;
		}
		aff_triple(strbuf);
		if (strbuf[0] != '0' || strbuf[1] != '0' || strbuf[2] != '0')
			dinguerie(str[i]);
	}
	return (1);
}
