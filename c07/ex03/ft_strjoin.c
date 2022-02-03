/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:45:56 by rlaforge          #+#    #+#             */
/*   Updated: 2022/01/31 22:16:40 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[i])
		i++;
	while (src[n])
	{
		dest[i + n] = src[n];
		n++;
	}
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_malloc_empty(void)
{
	char	*empty;

	empty = malloc(sizeof(char));
	empty[0] = '\0';
	return (empty);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		lenght;
	int		i;

	i = -1;
	lenght = 0;
	if (size == 0)
		return (ft_malloc_empty());
	while (++i < size)
		lenght += ft_strlen(strs[i]);
	lenght += ft_strlen(sep) * (size - 1);
	i = -1;
	tab = malloc(sizeof(char) * lenght + 1);
	tab[0] = '\0';
	if (!tab)
		return (0);
	while (++i < size)
	{
		if (i != 0)
			tab = ft_strcat(tab, sep);
		tab = ft_strcat(tab, strs[i]);
	}
	return (tab);
}
