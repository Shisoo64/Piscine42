/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 20:59:33 by rlaforge          #+#    #+#             */
/*   Updated: 2022/01/17 22:25:29 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	printos(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	buf;

	buf = nb;
	if (nb < 0)
	{
		buf = -buf;
		write(1, "-", 1);
	}
	if (buf <= 9)
	{
		printos(buf + '0');
	}
	if (buf > 9)
	{
		ft_putnbr(buf / 10);
		ft_putnbr(buf % 10);
	}
}
