/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_piece.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 16:01:57 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/24 13:33:47 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_search_piece(t_env *env, t_index *index)
{
	index->i = 0;
	while (index->i < env->piece.y)
	{
		index->j = 0;
		while (index->j < env->piece.x)
		{
			if (env->map.map[index->i][index->j] == env->oppon.letter)
			{
				env->oppon.y = index->i;
				env->oppon.x = index->j;
			}
			if (env->map.map[index->i][index->j] == env->user.letter)
			{
				env->user.y = index->i;
				env->user.x = index->j;
			}
			index->j++;
		}
		index->i++;
	}
	ft_place(env, index);
	return (0);
}
