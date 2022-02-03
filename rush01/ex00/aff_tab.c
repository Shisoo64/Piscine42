/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieure <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 14:55:06 by lprieure          #+#    #+#             */
/*   Updated: 2022/01/23 23:37:21 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		verif_global(int **tab_scrap_int);
void	ft_truc_a_un(int **tab);

/* Tableau d'exemple */
/*
*int	**arnaquos(int **tab)
*{
*	int	x;
*	int	y;
*	int	tabus2000[6][6] = {{0, 4, 3, 2, 1, 0},
*				   {4, 1, 2, 3, 4, 1},
*			 	   {3, 2, 3, 4, 1, 2},
*				   {2, 3, 4, 1, 2, 2},
*				   {1, 4, 1, 2, 3, 2},
*			           {0, 1, 2, 2, 2, 0}};
*
*	x = 1;
*	y = 1;
*	while (x <= 4)
*	{
*		while (y <= 4)
*		{
*			tab[x][y] = tabus2000[x][y];
*			y++;
*		}
*		x++;
*		y = 1;
*	}
*	return (tab);
*}
*/

/* x = lignes, y = colonnes */
/* arnaquos(tab); */
void	aff_tab(int **tab)
{
	int		x;
	int		y;
	char	char_print;

	x = 1;
	y = 1;
	ft_truc_a_un(tab);
	if (verif_global(tab))
	{
		while (x <= 4)
		{
			while (y <= 4)
			{
				char_print = tab[x][y] + '0';
				write(1, &char_print, 1);
				if (y != 4)
					write(1, " ", 1);
				y++;
			}
			x++;
			y = 1;
			write(1, "\n", 1);
		}
	}
}
