/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 10:39:23 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/28 20:19:56 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

char		**ft_init_map(t_filler *filler)
{
	char	**map;
	int		i;
	int		j;

	i = 0;
	map = (char**)malloc((filler->map.y + 1) * sizeof(char*));
	while (i < filler->map.y)
	{
		map[i] = (char*)malloc((filler->map.x + 1) * sizeof(char));
		i++;
	}
	map[i] = NULL;
	i = 0;
	j = 0;
	while (i < filler->map.y)
	{
		while (j < filler->map.x)
		{
			map[i][j] = '.';
			j++;
		}
		map[i][j] = '\0';
		i++;
	}
	return (map);
}

static void	ft_take_map(t_filler *filler, char *line)
{
	int		i;
	int		j;

	i = 0;
	while (i < filler->map.y)
	{
		j = 0;
		while (line[j + 4])
		{
			filler->map.map[i][j] = line[j + 4];
			j++;
		}
		if (i != filler->map.y - 1)
		{
			free_line(line);
			get_next_line(0, &line);
		}
		i++;
	}
	free_line(line);
}

void		ft_map(t_filler *filler)
{
	char	*line;

	if (filler->map.map != NULL)
	{
		get_next_line(0, &line);
		free(line);
	}
	else
		ft_info_map(filler);
	get_next_line(0, &line);
	free_line(line);
	get_next_line(0, &line);
	ft_take_map(filler, line);
}
