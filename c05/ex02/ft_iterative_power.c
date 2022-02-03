/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:45:09 by rlaforge          #+#    #+#             */
/*   Updated: 2022/02/01 00:06:54 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	billy;

	billy = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power-- != 0)
		billy *= nb;
	return (billy);
}
