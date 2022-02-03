/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:09:16 by rlaforge          #+#    #+#             */
/*   Updated: 2022/01/30 18:00:48 by mdrouin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonctions.h"

int	error_fic(int fd)
{
	if (fd == -1)
	{
		write(1, "ERROR : cant find file", 22);
		return (1);
	}
	return (0);
}

int	error_malloc(char *malloc_to_free)
{
	if (malloc_to_free == NULL)
	{
		write(1, "ERROR : malloc null", 17);
		free(malloc_to_free);
		return (1);
	}
	return (0);
}
