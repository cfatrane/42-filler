/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_piece.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 16:01:57 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/21 16:59:50 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_search_piece(t_env *env)
{
	int		i = 0;
	int		j = 0;

	if (env->tour == 0)
	{
		while (ft_strchr(env->map.map[i], env->user.letter) == NULL)
			ft_strchr(env->map.map[i++], env->user.letter);
		while (env->map.map[i][j] != env->user.letter)
			j++;
		env->tour = 1;
	}
	else
	{
		while (ft_strchr(env->map.map[i], env->user.last) == NULL)
			ft_strchr(env->map.map[i++], env->user.last);
		while (env->map.map[i][j] != env->user.last)
			j++;
	}
	env->piece.push_x = i;
	env->piece.push_y = j;
	ft_push_piece(env);
	i = 0;
	return (0);
}
