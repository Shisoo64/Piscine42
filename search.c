/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:53:10 by rlaforge          #+#    #+#             */
/*   Updated: 2022/01/29 17:02:54 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	ctr[2];

	if (*to_find == '\0')
		return (str);
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
					return (str + ctr[0]);
				}
			}
		}
		ctr[0]++;
	}
	return (0);
}

int	ft_wordlen(char *str)
{
	int	i;
	int	n;
	
	i = 0;
	n = 0;
	while (str[i] != '\n')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			n++;
		i++;
	}
	return (n);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	return (i);
}

char	*ft_search(char *str, char *to_find)
{
	char	*result;
	char	*buf;
	int	i;
	int	ok;
	int	n;

	ok = 1;
	i = 0;
	n = 0;
	result = malloc(sizeof(char) * ft_wordlen(ft_strstr(str, to_find)));
	buf = malloc(sizeof(char) * ft_strlen(ft_strstr(str, to_find)));
	buf = ft_strstr(str, to_find);
	while (buf[i] != '\n' || ok)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			ok = 0;
			result[n] = buf[i];
			n++;
		}
		i++;
	}
	return(result);
}

void main()
{
	char *str = "7: seven \n8: eight \n9: nine \n10: ten \n11: eleven \n";
	char *search = "9";
	char *result;

	result = ft_search(str, search);
	printf("%s", result);
}
