/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 18:17:56 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/08 20:27:20 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_info_user(t_filler *env)
{
	get_next_line(0, &env->line);
	env->user = ((ft_strstr(env->line, "p1") != NULL) ? 'O' : 'X');
	env->oppon = (env->user == 'O' ? 'X' : 'O');
	//	env->oppon.last = (env->oppon == 'O' ? 'o' : 'x');
	return (0);
}

int	ft_info_map(t_filler *env)
{
	get_next_line(0, &env->line);
	while (!ft_isdigit(*env->line))
		env->line++;
	env->y_map = ft_atoi(env->line);
	while (ft_isdigit(*env->line + 1))
		env->line++;
	env->x_map = ft_atoi(env->line);
	return (0);
}

int	ft_info(t_filler *env)
{
	ft_info_user(env);
	ft_info_map(env);
	return (0);
}
