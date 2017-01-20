/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:21:03 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/20 19:35:19 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_take_map(t_env *env)
{
	int		i;
	int		j;

	i = 0;
	j = env->map.y;
	env->map.map = ft_strnew_two(env->map.x, env->map.y);
	get_next_line(0, &env->line);
	while (get_next_line(0, &env->line) && i < j)
		if (ft_isdigit(*env->line))
			ft_putendl_fd((env->map.map[i++] = env->line + 4), 2);
	return (0);
}
