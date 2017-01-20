/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_piece.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:02:50 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/20 20:02:33 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_info_piece(t_env *env)
{
	while (!ft_isdigit(*env->line))
		env->line++;
	env->piece.y = ft_atoi(env->line);
	while (ft_isdigit(*env->line + 1))
		env->line++;
	env->piece.x = ft_atoi(env->line);
	ft_putnbr_fd(env->piece.y, 2);
	ft_putnbr_fd(env->piece.x, 2);
	return (0);
}

int	ft_take_piece(t_env *env)
{
	int		i;
	int		j;

	ft_putstr_fd("LAST LINE  PIECE = ", 2);
	ft_putendl_fd(env->line, 2);
	ft_info_piece(env);
	i = 0;
	j = env->piece.y;
	env->piece.map = ft_strnew_two(env->piece.x, env->piece.y);
	while (get_next_line(0, &env->line) && i < j)
		if (ft_isdigit(*env->line))
			ft_putendl_fd((env->map.map[i++] = env->line + 4), 2);
	return (0);
}
