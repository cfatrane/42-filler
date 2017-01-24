/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:21:03 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/24 11:14:42 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_take_map(t_env *env, t_index *index)
{
	index->a = 0;
	index->b = env->map.y;
	if (!(env->map.map))
		env->map.map = ft_strnew_two(env->map.x, env->map.y);
	get_next_line(0, &env->line);
	while (index->b--)
	{
		get_next_line(0, &env->line);
		if (ft_isdigit(*env->line))
			env->map.map[index->a++] = ft_strdup(env->line + 4);
	}
	return (0);
}
