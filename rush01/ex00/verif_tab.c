/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 05:03:23 by ssubielo          #+#    #+#             */
/*   Updated: 2022/01/23 23:18:35 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	check_double_x(int **tab_scrap)
{
	int	cnt[3];

	cnt[0] = 1;
	cnt[1] = 1;
	cnt[2] = 1;
	while (cnt[0] < 5)
	{
		cnt[1] = 1;
		while (cnt[1] < 5)
		{
			cnt[2] = 1;
			while (cnt[2] < 5)
			{
				if (tab_scrap[cnt[0]][cnt[2]] == tab_scrap[cnt[0]][cnt[1]])
				{
					if (cnt[2] != cnt[1])
						return (0);
				}
				cnt[2]++;
			}
			cnt[1]++;
		}
		cnt[0]++;
	}
	return (1);
}

int	check_double_y(int **tab_scrap)
{
	int	cnt[3];

	cnt[0] = 1;
	cnt[1] = 1;
	cnt[2] = 1;
	while (cnt[0] < 5)
	{
		cnt[1] = 1;
		while (cnt[1] < 5)
		{
			cnt[2] = 1;
			while (cnt[2] < 5)
			{
				if (tab_scrap[cnt[2]][cnt[0]] == tab_scrap[cnt[1]][cnt[0]])
				{
					if (cnt[2] != cnt[1])
						return (0);
				}
				cnt[2]++;
			}
			cnt[1]++;
		}
		cnt[0]++;
	}
	return (1);
}
