/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 16:20:10 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/15 16:20:12 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	info_user(t_filler *env)
{
	char		*line;

	get_next_line(0, &line);
	env->user = ((ft_strstr(line, "p1") != NULL) ? 'O' : 'X');
	env->oppon = (env->user == 'O' ? 'X' : 'O');
	return (0);
}

int	info_map(t_filler *env)
{
	char		*line;

	get_next_line(0, &line);
	while (!ft_isdigit(*line))
		line++;
	env->y_map = ft_atoi(line);
	while (ft_isdigit(*line + 1))
		line++;
	env->x_map = ft_atoi(line);
	return (0);
}
