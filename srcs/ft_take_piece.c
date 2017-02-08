/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_piece.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 18:27:58 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/08 19:53:45 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_info_piece(t_filler *env)
{
	get_next_line(0, &env->line);
	while (!ft_isdigit(*env->line))
		env->line++;
	env->y_token = ft_atoi(env->line);
	while (ft_isdigit(*env->line + 1))
		env->line++;
	env->x_token = ft_atoi(env->line);
	return (0);
}

int	ft_take_piece(t_filler *env)
{
	int	i;
	int	j;

	ft_info_piece(env);
	i = 0;
	j = env->y_token;
	if (!(env->token))
		env->token = ft_strnew_two(env->x_token, env->y_token);
	while (j--)
	{
		get_next_line(0, &env->line);
		env->token[i++] = ft_strdup(env->line);
	}
	return (0);
}
