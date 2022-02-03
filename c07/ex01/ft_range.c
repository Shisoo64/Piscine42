/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:52:15 by rlaforge          #+#    #+#             */
/*   Updated: 2022/01/31 17:52:20 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	ctr;
	int	*tab;

	tab = NULL;
	if (min >= max)
		return (tab);
	ctr = 0;
	tab = malloc(sizeof(int) * (max - min));
	while (min < max && tab)
		tab[ctr++] = min++;
	return (tab);
}
