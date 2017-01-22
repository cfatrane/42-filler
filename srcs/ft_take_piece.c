/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_piece.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:02:50 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/22 16:27:11 by cfatrane         ###   ########.fr       */
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

int	ft_pos_piece_min(t_env *env)
{
	int	i;
	int	j;

	i = 0;
	env->piece.min_x = env->piece.x;
	while (i < env->piece.y)
	{
		j = 0;
		while (j < env->piece.x)
		{
			if (env->piece.map[i][j] == STAR)
				env->piece.min_y = i;
			j++;
		}
		i++;
	}
	i = 0;
	while (i < env->piece.y)
	{
		j = 0;
		while (j < env->piece.x)
		{
			if (env->piece.map[i][j] == STAR)
				if (j < env->piece.min_x)
					env->piece.min_x = j;
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_pos_piece_max(t_env *env)
{
	int	i;
	int	j;

	i = env->piece.y;
	j = env->piece.x;
	while (i--)
	{
		j = 0;
		while (j--)
		{
			if (env->piece.map[i][j] == STAR)
			{
				env->piece.max_y = i;
				env->piece.max_x = j;
			}
		}
	}
	return (0);
}

int	ft_take_piece(t_env *env)
{
	int		i;
	int		j;

	ft_info_piece(env);
	i = 0;
	j = env->piece.y;
	env->piece.map = ft_strnew_two(env->piece.x, env->piece.y);
	while (j--)
	{
		get_next_line(0, &env->line);
		env->piece.map[i++] = env->line;
	}
	ft_pos_piece_min(env);
	//	ft_pos_piece_max(env);
	return (0);
}
