/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_global.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:23:23 by ssubielo          #+#    #+#             */
/*   Updated: 2022/01/23 23:19:11 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	view_up(int **tab_scrap_int);
int	view_down(int **tab_scrap_int);
int	view_left(int **tab_scrap_int);
int	view_rigth(int **tab_scrap_int);
int	check_double_x(int **tab_scrap_int);
int	check_double_y(int **tab_scrap_int);

int	verif_global(int **tab_scrap_int)
{
	int	temp[6];

	temp[0] = view_up(tab_scrap_int);
	temp[1] = view_down(tab_scrap_int);
	temp[2] = view_left(tab_scrap_int);
	temp[3] = view_rigth(tab_scrap_int);
	temp[4] = check_double_x(tab_scrap_int);
	temp[5] = check_double_y(tab_scrap_int);
	if (temp[0] && temp[1] && temp[2] && temp[3] && temp[4] && temp[5])
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
