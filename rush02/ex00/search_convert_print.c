/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_convert_print.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:53:56 by rlaforge          #+#    #+#             */
/*   Updated: 2022/01/30 17:41:22 by cmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonctions.h"

char	*malloc_dict(char *malloc_cahine);
char	*ft_search(char *str, char *to_find);
int		dizaine_and_unit(char *str);

int	search_convert_print(char *search)
{
	char	*result;
	char	*str;

	str = 0;
	str = malloc_dict(str);
	if (error_malloc(str))
		return (0);
	result = ft_search(str, search);
	if (error_malloc(result))
		return (0);
	free(str);
	ft_putstr(result);
	free(result);
	return (1);
}

/* Gere les millions, billions, etc */
void	dinguerie(char sign)
{
	if (sign == '-' || sign == '+' || sign == '.')
	{
		write(1, " ", 1);
		if (sign == '-')
			search_convert_print("1000000000");
		if (sign == '+')
			search_convert_print("1000000");
		if (sign == '.')
			search_convert_print("1000");
		write(1, " ", 1);
	}
}

void	centaine(char *str)
{
	char	bufos[2];

	bufos[0] = str[0];
	bufos[1] = '\0';
	if (str[0] != '0')
	{
		search_convert_print(bufos);
		write(1, " ", 1);
		search_convert_print("100");
		if (str[1] != '0' || str[2] != '0')
			write(1, " and ", 5);
	}
}

/* Affiche les chiffres par string de 3 */
int	aff_triple(char *str)
{
	char	strbuf[3];
	int		i;

	i = 0;
	strbuf[0] = 0;
	strbuf[1] = 0;
	strbuf[2] = 0;
	while (str[i] >= '0' && str[i] <= '9' && i < 3)
	{
		strbuf[i] = str[i];
		i++;
	}
	centaine(strbuf);
	dizaine_and_unit(strbuf);
	return (1);
}
