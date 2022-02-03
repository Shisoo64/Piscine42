/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:22:10 by rlaforge          #+#    #+#             */
/*   Updated: 2022/01/15 14:22:13 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_top_bottom(int width)
{
	int	i;

	i = 0;
	while (i < width)
	{
		if (i == width - 1)
		{
			if (i == 0)
				ft_putchar('A');
			else
				ft_putchar('C');
			ft_putchar('\n');
		}
		else if (i == 0)
			ft_putchar('A');
		else
			ft_putchar('B');
		i++;
	}
}

void	print_body(int width)
{
	int	i;

	i = 0;
	while (i < width)
	{
		if (i == width - 1)
		{
			ft_putchar('B');
			ft_putchar('\n');
		}
		else if (i == 0)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
}

void	rush(int width, int height)
{
	int	i;

	i = 0;
	while (i < height)
	{
		if (i == 0 || i == height - 1)
			print_top_bottom(width);
		else
			print_body(width);
		i++;
	}
}
