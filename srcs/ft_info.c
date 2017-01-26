/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 11:33:19 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/26 12:35:47 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void		ft_info_user(t_env *env)
{
	char	*line;

	get_next_line(0, &line);
	free(line);
	env->user = ((ft_strstr(line, "p1") != NULL) ? 'O' : 'X');
	env->oppon = (env->user == 'O' ? 'X' : 'O');
	env->map.map = NULL;
}

void		ft_info_map(t_env *env)
{
	int		i;
	char	*line;

	i = 0;
	get_next_line(0, &line);
	while (line[i] && !ft_isdigit(line[i]))
		i++;
	env->map.y = ft_atoi(&(line[i]));
	while (line[i] != ' ')
		i++;
	env->map.x = ft_atoi(&(line[i]));
	env->map.map = ft_init_map(env);
	free_line(line);
}
