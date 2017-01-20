/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:21:03 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/20 14:51:44 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_take_map(t_env *env)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	j = env->map.y;
	env->map.map = ft_strnew_two(env->map.x, env->map.y);
	while (get_next_line(0, &line) && j--)
	{
		env->map.map[i] = line + 4;
		i++;
	}
	return (0);
}
