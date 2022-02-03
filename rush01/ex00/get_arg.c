/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 22:57:21 by ssubielo          #+#    #+#             */
/*   Updated: 2022/01/23 03:33:32 by ssubielo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <stdlib.h>

int	**place_in_tab_line(int *arg_int, int **tab_scrap_int)
{
	int	cnt;

	cnt = 1;
	while (cnt < 5)
	{	
		tab_scrap_int[0][cnt] = arg_int[cnt - 1];
		cnt++;
	}
	cnt = 1;
	while (cnt < 5)
	{
		tab_scrap_int[5][cnt] = arg_int[cnt + 3];
		cnt++;
	}
	return (tab_scrap_int);
}

int	**place_in_tab_col(int *arg_int, int **tab_scrap_int)
{
	int	cnt;

	cnt = 1;
	while (cnt < 5)
	{
		tab_scrap_int[cnt][0] = arg_int[cnt + 7];
		cnt++;
	}
	cnt = 1;
	while (cnt < 5)
	{
		tab_scrap_int[cnt][5] = arg_int[cnt + 11];
		cnt++;
	}
	return (tab_scrap_int);
}

int	*char_to_int(int *arg_tri)
{
	int	*arg_int;
	int	cnt;

	arg_int = malloc(sizeof(int *) * 16);
	cnt = 0;
	while (cnt < 16)
	{
		arg_int[cnt] = arg_tri[cnt] - 48;
		cnt++;
	}
	return (arg_int);
}

int	check_arg(int nb_char, char arg)
{
	int	check_sp;

	check_sp = nb_char % 2;
	if (nb_char == 1 && (arg >= '1' && arg <= '4'))
		return (1);
	else if ((check_sp == 1 || nb_char == 1) && arg == ' ')
		return (1);
	else if (check_sp == 0 && (arg >= '1' && arg <= '4'))
		return (2);
	else
		return (0);
}

int	**set_arg(char *arg, int **tab_scrap_int)
{
	int	*arg_tri;
	int	cnt[2];

	arg_tri = malloc(sizeof(int *) * 16);
	cnt[0] = 0;
	cnt[1] = 0;
	while (arg[cnt[0]] != '\0')
	{
		if (check_arg(cnt[0], arg[cnt[0]]) == 0)
			return (0);
		else if (check_arg(cnt[0], arg[cnt[0]]) == 2)
		{
			if (cnt[1] < 16)
			{
				arg_tri[cnt[1]] = arg[cnt[0]];
				cnt[1]++;
			}
		}
		cnt[0]++;
	}
	if (cnt[0] != 31)
		return (0);
	tab_scrap_int = place_in_tab_line(char_to_int(arg_tri), tab_scrap_int);
	tab_scrap_int = place_in_tab_col(char_to_int(arg_tri), tab_scrap_int);
	return (tab_scrap_int);
}
