/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:32:44 by ssubielo          #+#    #+#             */
/*   Updated: 2022/01/30 18:08:12 by cmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonctions.h"

/* set the lenght of the malloc with the lenght of the file*/
int	get_leng_of_file(char *fd_name)
{
	char	curseur;
	int		i;
	int		j;
	int		fd;

	i = 0;
	j = 0;
	fd = open(fd_name, O_RDONLY);
	if (error_fic(fd))
		return (0);
	while (read(fd, &curseur, 1) && j < 300)
	{
		i++;
		if (curseur == '\n')
			j++;
	}
	close(fd);
	return (i);
}

int	file_to_malloc(char *in_fic, char *fd_name)
{
	char	curseur;
	int		i;
	int		j;
	int		fd;

	i = 0;
	j = 0;
	fd = open(fd_name, O_RDONLY);
	if (error_fic(fd))
		return (0);
	while (read(fd, &curseur, 1) && j < 300)
	{
		in_fic[i] = curseur;
		i++;
		if (curseur == '\n')
			j++;
	}
	in_fic[i] = '\0';
	close(fd);
	return (1);
}

char	*malloc_dict(char *malloc_cahine)
{
	char	*fd_name;

	fd_name = "fichieralire.dict";
	malloc_cahine = malloc(sizeof(char) * get_leng_of_file(fd_name) + 1);
	malloc_cahine[0] = 0;
	if (!file_to_malloc(malloc_cahine, fd_name))
		return (0);
	return (malloc_cahine);
}
