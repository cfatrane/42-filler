/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 17:20:20 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/23 18:12:17 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_info_user(t_env *env)
{
	get_next_line(0, &env->line);
	env->user.letter = ((ft_strstr(env->line, "p1") != NULL) ? 'O' : 'X');
	env->oppon.letter = (env->user.letter == 'O' ? 'X' : 'O');
	env->oppon.last = (env->oppon.letter == 'O' ? 'o' : 'x');
	return (0);
}

int	ft_info_map(t_env *env)
{
	get_next_line(0, &env->line);
	while (!ft_isdigit(*env->line))
		env->line++;
	env->map.y = ft_atoi(env->line);
	while (ft_isdigit(*env->line + 1))
		env->line++;
	env->map.x = ft_atoi(env->line);
	return (0);
}

int	ft_info(t_env *env)
{
	ft_info_user(env);
//	ft_info_map(env);
	return (0);
}
