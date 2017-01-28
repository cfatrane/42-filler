/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 11:33:19 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/28 20:19:16 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void		ft_info_user(t_filler *filler)
{
	char	*line;

	get_next_line(0, &line);
	free(line);
	filler->user = ((ft_strstr(line, "p1") != NULL) ? 'O' : 'X');
	filler->oppon = (filler->user == 'O' ? 'X' : 'O');
	filler->map.map = NULL;
}

void		ft_info_map(t_filler *filler)
{
	int		i;
	char	*line;

	i = 0;
	get_next_line(0, &line);
	while (line[i] && !ft_isdigit(line[i]))
		i++;
	filler->map.y = ft_atoi(&(line[i]));
	while (line[i] != ' ')
		i++;
	filler->map.x = ft_atoi(&(line[i]));
	filler->map.map = ft_init_map(filler);
	free_line(line);
}
