/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_piece.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:02:50 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/21 16:44:03 by cfatrane         ###   ########.fr       */
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

int	ft_pos_piece(t_env *env)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (ft_strchr(env->piece.map[i], '*') == NULL)
		ft_strchr(env->piece.map[i++], env->user.letter);
	while (env->piece.map[i][j] != '*')
		j++;

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
//	ft_pos_piece(env);
	return (0);
}
