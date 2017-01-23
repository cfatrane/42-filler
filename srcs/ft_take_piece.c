/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_piece.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:02:50 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/22 17:52:01 by cfatrane         ###   ########.fr       */
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

int	ft_take_piece(t_env *env)
{
	int		i;
	int		j;

	ft_info_piece(env);
	i = 0;
	j = env->piece.y;
	if (!(env->piece.map))
		env->piece.map = ft_strnew_two(env->piece.x, env->piece.y);
	while (j--)
	{
		get_next_line(0, &env->line);
		env->piece.map[i++] = ft_strdup(env->line);
	}
	return (0);
}
