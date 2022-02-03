/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_tab_check_view_b.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 07:56:06 by ssubielo          #+#    #+#             */
/*   Updated: 2022/01/23 11:35:03 by ssubielo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	view_up_b(int **tab_scrap_int, int *pov, int *cntu, int *cnts)
{
	if (tab_scrap_int[cntu[0]][*cnts] < tab_scrap_int[cntu[0]][cntu[1] + 1])
	{
		cntu[1]++;
		*pov = tab_scrap_int[cntu[0]][cntu[1]];
		*cnts = cntu[1];
		cntu[2]++;
	}
	else
	{
		*pov = tab_scrap_int[cntu[0]][cntu[1]];
		cntu[1]++;
	}
}

void	view_down_b(int **tab_scrap_int, int *pov, int *cntd, int *cnts)
{
	if (tab_scrap_int[cntd[0]][*cnts] < tab_scrap_int[cntd[0]][cntd[1] + 1])
	{
		cntd[1]--;
		*pov = tab_scrap_int[cntd[0]][cntd[1]];
		*cnts = cntd[1];
		cntd[2]++;
	}
	else
	{
		*pov = tab_scrap_int[cntd[0]][cntd[1]];
		cntd[1]--;
	}
}

void	view_left_b(int **tab_scrap_int, int *pov, int *cntl, int *cnts)
{
	if (tab_scrap_int[cntl[0]][*cnts] < tab_scrap_int[cntl[0]][cntl[1] + 1])
	{
		cntl[1]++;
		*pov = tab_scrap_int[cntl[0]][cntl[1]];
		*cnts = cntl[1];
		cntl[2]++;
	}
	else
	{
		*pov = tab_scrap_int[cntl[0]][cntl[1]];
		cntl[1]++;
	}
}

void	view_rigth_b(int **tab_scrap_int, int *pov, int *cntr, int *cnts)
{
	if (tab_scrap_int[cntr[0]][*cnts] < tab_scrap_int[cntr[0]][cntr[1] + 1])
	{
		cntr[1]--;
		*pov = tab_scrap_int[cntr[0]][cntr[1]];
		*cnts = cntr[1];
		cntr[2]++;
	}
	else
	{
		*pov = tab_scrap_int[cntr[0]][cntr[1]];
		cntr[1]--;
	}
}
