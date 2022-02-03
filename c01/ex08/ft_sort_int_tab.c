/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:07:55 by rlaforge          #+#    #+#             */
/*   Updated: 2022/01/20 17:15:00 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);
void	dinguerie(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			dinguerie(tab, size);
		}
		else if (i == size)
		{
			return ;
		}
		i++;
	}
}

void	dinguerie(int *tab, int size)
{
	int	i;
	int	buf;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			buf = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = buf;
		}
		i++;
	}
	ft_sort_int_tab(tab, size);
}
