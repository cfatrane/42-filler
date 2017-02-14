/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 18:25:22 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/10 11:36:56 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/filler.h"

char **malloc_tab(ssize_t y_map, ssize_t x_map)
{
	char	**map;
	int		i;

	i = 0;
	if (!(map = (char**)malloc(sizeof(*map) * y_map)))
		return (NULL);
	while (i < y_map)
	{
		map[i] = (char*)malloc(sizeof(**map)  * x_map);
		i++;
	}
	return (map);
}
int	take_map(t_filler *env)
{
	int	i;
	int	j;

	i = 0;
	j = env->y_map;
//	if (!(env->map))
//		env->map = ft_strnew_two(env->y_map, env->x_map);
	env->map = malloc_tab(env->y_map, env->x_map);
	get_next_line(0, &env->line);
	while (j--)
	{
		get_next_line(0, &env->line);
		if (ft_isdigit(*env->line))
			env->map[i++] = ft_strdup(env->line + 4);
	}
	return (0);
}
