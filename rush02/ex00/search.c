/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:53:10 by rlaforge          #+#    #+#             */
/*   Updated: 2022/01/30 17:38:23 by cmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonctions.h"

char	*put_result(char *result, char *str, int z);

/* Retourne la position du resultat */
int	ft_strstr(char *str, char *to_find)
{
	int	ctr[2];

	if (*to_find == '\0')
		return (0);
	ctr[0] = 0;
	while (str[ctr[0]])
	{
		if (str[ctr[0]] == to_find[0])
		{
			ctr[1] = 0;
			while (str[ctr[1]] && str[ctr[0] + ctr[1]] == to_find[ctr[1]])
			{
				ctr[1]++;
				if (to_find[ctr[1]] == '\0')
				{
					return (ctr[0]);
				}
			}
		}
		ctr[0]++;
	}
	return (0);
}
/* Search avec strstr */
/* decoupage, insertion dans un malloc et retour du resultat */
/* i[0] = curseur global */
/* i[1] = longueur du mot */
/* i[2] = z = curseur dans le mot */
/* ok == 1 si on est dans le mot */

char	*ft_search(char *str, char *to_find)
{
	char	*result;
	int		i[3];
	int		ok;

	ok = 0;
	i[0] = ft_strstr(str, to_find) - 1;
	while (str[i[0]++] != ':' || !ok)
	{
		if (str[i[0]] >= '!' && str[i[0]] <= '~')
			ok = 1;
	}
	i[1] = 0;
	i[2] = i[0];
	while (str[i[0]++] != '\n')
	{
		if (str[i[0]] >= '!' && str[i[0]] <= '~')
			i[1]++;
	}
	result = malloc(i[1] * sizeof(char) + 1);
	if (error_malloc(result))
		return (0);
	result = put_result(result, str, i[2]);
	return (result);
}

/* Met le resultat du search dans le malloc */
char	*put_result(char *result, char *str, int z)
{
	int	n;

	n = 0;
	while (str[z] != '\n')
	{
		if (str[z] >= '!' && str[z] <= '~')
		{
			result[n] = str[z];
			n++;
		}
		z++;
	}
	result[n] = '\0';
	return (result);
}
