/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:21:35 by rlaforge          #+#    #+#             */
/*   Updated: 2022/01/15 14:21:40 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_top(int width)
{
	int	i;

	i = 0;
	while (i < width)
	{
		if (i == width - 1)
		{
			if (i == 0)
				ft_putchar('/');
			else
				ft_putchar('\\');
			ft_putchar('\n');
		}
		else if (i == 0)
			ft_putchar('/');
		else
			ft_putchar('*');
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
			ft_putchar('*');
			ft_putchar('\n');
		}
		else if (i == 0)
			ft_putchar('*');
		else
			ft_putchar(' ');
		i++;
	}
}

void	print_bottom(int width)
{
	int	i;

	i = 0;
	while (i < width)
	{
		if (i == width - 1)
		{
			if (i == 0)
				ft_putchar('\\');
			else
				ft_putchar('/');
			ft_putchar('\n');
		}
		else if (i == 0)
			ft_putchar('\\');
		else
			ft_putchar('*');
		i++;
	}
}

void	rush(int width, int height)
{
	int	i;

	i = 0;
	while (i < height)
	{
		if (i == 0)
			print_top(width);
		else if (i == height - 1)
			print_bottom(width);
		else
			print_body(width);
		i++;
	}
}
