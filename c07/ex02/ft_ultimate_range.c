/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:42:25 by rlaforge          #+#    #+#             */
/*   Updated: 2022/01/31 18:42:41 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	ctr;
	int	lenght;
	int	*buf;

	*range = NULL;
	ctr = 0;
	lenght = max - min;
	if (min >= max)
		return (0);
	buf = malloc(sizeof(int) * lenght);
	if (!buf)
		return (-1);
	while (min < max)
		buf[ctr++] = min++;
	*range = buf;
	return (lenght);
}
