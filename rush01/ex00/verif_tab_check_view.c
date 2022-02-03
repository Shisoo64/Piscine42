/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_tab_check_view.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 06:50:31 by ssubielo          #+#    #+#             */
/*   Updated: 2022/01/23 23:24:02 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

void	view_rigth_b(int **tab_scrap_int, int *pov, int *cntr, int *cnts);
void	view_down_b(int **tab_scrap_int, int *pov, int *cntd, int *cnts);
void	view_left_b(int **tab_scrap_int, int *pov, int *cntl, int *cnts);
void	view_up_b(int **tab_scrap_int, int *pov, int *cntu, int *cnts);

int	view_up(int **tab_scrap_int)
{
	int	*cntu;
	int	cnts;
	int	pov;

	cntu = malloc(sizeof(int *) * 3);
	cntu[0] = 1;
	cntu[1] = 1;
	cntu[2] = 1;
	pov = tab_scrap_int[cntu[0]][cntu[1]];
	while (cntu[1] < 5)
	{
		cnts = 1;
		while (pov != 4)
		{
			view_up_b(tab_scrap_int, &pov, cntu, &cnts);
		}
		if (cntu[2] != tab_scrap_int[0][cntu[0]])
		{
			free(cntu);
			return (0);
		}
		cntu[1]++;
	}
	return (1);
}

int	view_down(int **tab_scrap_int)
{
	int	*cntd;
	int	cnts;
	int	pov;

	cntd = malloc(sizeof(int *) * 3);
	cntd[0] = 4;
	cntd[1] = 1;
	cntd[3] = 1;
	pov = tab_scrap_int[cntd[0]][cntd[1]];
	while (cntd[1] < 5)
	{
		cnts = 1;
		while (pov != 4)
		{
			view_down_b(tab_scrap_int, &pov, cntd, &cnts);
		}
		if (cntd[2] != tab_scrap_int[5][cntd[1]])
		{
			free(cntd);
			return (0);
		}
		cntd[1]++;
	}
	return (1);
}

int	view_left(int **tab_scrap_int)
{
	int	*cntl;
	int	cnts;
	int	pov;

	cntl = malloc(sizeof(int *) * 3);
	cntl[0] = 1;
	cntl[1] = 1;
	cntl[2] = 1;
	pov = tab_scrap_int[cntl[0]][cntl[1]];
	while (cntl[0] < 5)
	{
		cnts = 1;
		while (pov != 4)
		{
			view_left_b(tab_scrap_int, &pov, cntl, &cnts);
		}
		if (cntl[2] != tab_scrap_int[cntl[0]][0])
		{
			free(cntl);
			return (0);
		}
		cntl[0]++;
	}
	return (1);
}

int	view_rigth(int **tab_scrap_int)
{
	int	*cntr;
	int	cnts;
	int	pov;

	cntr = malloc(sizeof(int *) * 3);
	cntr[0] = 1;
	cntr[1] = 4;
	cntr[2] = 1;
	pov = tab_scrap_int[cntr[0]][cntr[1]];
	while (cntr[0] < 5)
	{
		cnts = 1;
		while (pov != 4)
			view_rigth_b(tab_scrap_int, &pov, cntr, &cnts);
		if (cntr[2] != tab_scrap_int[cntr[0]][5])
		{
			free(cntr);
			return (0);
		}
		cntr[0]--;
	}
	return (1);
}
