/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:30:20 by rlaforge          #+#    #+#             */
/*   Updated: 2022/02/01 00:12:46 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	x;

	x = 0;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (x * x != nb && x <= 46340)
		x++;
	if (x * x == nb)
		return (x);
	return (0);
}
