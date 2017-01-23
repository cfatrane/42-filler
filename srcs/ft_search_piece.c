/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_piece.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 16:01:57 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/23 19:06:40 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_search_piece(t_env *env)
{
	int	i;
	int	j;

	i = 0;
	while (i < env->piece.y)
	{
		j = 0;
		while (j < env->piece.x)
		{
			if (env->map.map[i][j] == env->oppon.letter)
			{
				env->oppon.y = i;
				env->oppon.x = j;
			}
			if (env->map.map[i][j] == env->user.letter)
			{
				env->user.y = i;
				env->user.x = j;
			}
			j++;
		}
		i++;
	}
	ft_place(env);
	return (0);
}
