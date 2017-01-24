/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_piece.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:02:50 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/24 11:24:18 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_info_piece(t_env *env)
{
	get_next_line(0, &env->line);
	while (!ft_isdigit(*env->line))
		env->line++;
	env->piece.y = ft_atoi(env->line);
	while (ft_isdigit(*env->line + 1))
		env->line++;
	env->piece.x = ft_atoi(env->line);
	return (0);
}

int	ft_take_piece(t_env *env, t_index *index)
{
	ft_info_piece(env);
	index->a = 0;
	index->b = env->piece.y;
	if (!(env->piece.map))
		env->piece.map = ft_strnew_two(env->piece.x, env->piece.y);
	while (index->b--)
	{
		get_next_line(0, &env->line);
		env->piece.map[index->a++] = ft_strdup(env->line);
	}
	return (0);
}
