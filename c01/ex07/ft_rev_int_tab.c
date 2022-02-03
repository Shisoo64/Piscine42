/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:12:32 by rlaforge          #+#    #+#             */
/*   Updated: 2022/01/20 11:31:51 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tabuf;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		tabuf = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = tabuf;
		i++;
	}
}
