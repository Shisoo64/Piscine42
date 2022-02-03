/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdrouin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:22:26 by mdrouin           #+#    #+#             */
/*   Updated: 2022/01/30 16:22:26 by mdrouin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fonctions.h"

int	parse(char *str);

/* Magie, gere les size bizarres */
int	ft_magic(char *str)
{
	int	size;

	size = ft_strlen(str);
	if (size == 10 || size == 9)
		return (13);
	if (size == 8 || size == 7 || size == 6)
		return (14);
	if (size == 5 || size == 4 || size == 3)
		return (15);
	if (size == 2 || size == 1)
		return (16);
	return (0);
}

/* Prend le ARGV et retourne un string formaté */
/* i[0] = curseur tab, i[1] = curseur printable, i[2] = curseur global*/
void	split_tab(char *str)
{
	char	tab[15];
	int		i[3];
	int		printable_zone;

	printable_zone = ft_magic(str) - ft_strlen(str);
	i[0] = -1;
	while (i[0]++ < 15)
		tab[i[0]] = '0';
	tab[3] = '-';
	tab[7] = '+';
	tab[11] = '.';
	i[0] = -1;
	i[1] = 0;
	i[2] = 0;
	while (i[0]++ < 15)
	{
		if ((tab[i[0]] == '0') || i[1] < printable_zone)
			i[1]++;
		if ((tab[i[0]] == '0') && i[1] >= printable_zone)
			tab[i[0]] = str[i[2]++];
	}
	parse(tab);
}
