/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 15:37:51 by ssubielo          #+#    #+#             */
/*   Updated: 2022/01/23 23:20:44 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdlib.h>

int		verif_global(int **tab_scrap_int);
int		**set_arg(char *arg, int **tab_scrap_int);
void	aff_tab(int **tab_scrap_int);

int	error(int **tab_scrap_int, char *argumentos)
{
	int	i;

	if (set_arg(argumentos, tab_scrap_int) == 0)
	{
		i = 0;
		write(1, "ERROR", 5);
		while (i < 6)
			free(tab_scrap_int[i++]);
		free(tab_scrap_int);
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	**tab_scrap_int;

	i = 0;
	if (argc != 2)
	{
		write(1, "ERROR", 5);
		return (0);
	}
	tab_scrap_int = malloc(sizeof(int *) * 6);
	while (i < 6)
	{
		tab_scrap_int[i] = malloc(sizeof(int) * 6);
		i++;
	}
	if (error(tab_scrap_int, argv[1]) == 0)
		return (0);
	tab_scrap_int = set_arg(argv[1], tab_scrap_int);
	aff_tab(tab_scrap_int);
}
