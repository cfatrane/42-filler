/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 18:25:22 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/08 20:23:20 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/filler.h"

int	ft_take_map(t_filler *env)
{
	int	i;
	int	j;

	i = 0;
	j = env->y_map;
	if (!(env->map))
		env->map = ft_strnew_two(env->x_map, env->y_map);
	get_next_line(0, &env->line);
	while (j--)
	{
		get_next_line(0, &env->line);
		if (ft_isdigit(*env->line))
		{
			env->map[i++] = ft_strdup(env->line + 4);
		/*	ft_putstr_fd("LINE ", 2);
			ft_putnbr_fd(i, 2);
			ft_putstr_fd(" = |", 2);
			ft_putstr_fd(env->line + 4, 2);
			ft_putendl_fd("|", 2);*/
		}
	}
	i = 0;
	while (env->map[i])
	{
		ft_putendl_fd(env->map[i] + 4, 2);
		i++;
	}
	return (0);
}
