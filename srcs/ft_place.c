/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 18:44:19 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/24 13:32:50 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_first(t_env *env, t_index *index)
{
	index->i = env->map.y;
	while (index->i--)
	{
		index->j = env->map.x;
		while (index->j--)
		{
			if (ft_check(env))
			{
				env->piece.push_x = index->j;
				env->piece.push_y = index->i;
			}
		}
	}
	return (0);
}

int	ft_second(t_env *env, t_index *index)
{
	index->i = 0;
	while (env->map.y--)
	{
		index->j = 0;
		while (env->map.x--)
		{
			if (ft_check(env))
			{
				env->piece.push_x = index->j;
				env->piece.push_y = index->i;
			}
			index->j++;
		}
		index->i++;
	}
	return (0);
}

int	ft_third(t_env *env, t_index *index)
{
	index->i = env->map.y;
	while (index->i--)
	{
		index->j = 0;
		while (env->map.x--)
		{
			if (ft_check(env))
			{
				env->piece.push_x = index->j;
				env->piece.push_y = index->i;
			}
			index->j++;
		}
	}
	return (0);
}

int	ft_fourth(t_env *env, t_index *index)
{
	index->i = 0;
	while (env->map.y--)
	{
		index->j = env->map.x;
		while (index->j--)
		{
			if (ft_check(env))
			{
				env->piece.push_x = index->j;
				env->piece.push_y = index->i;
			}
		}
		index->i++;
	}
	return (0);
}

int	ft_place(t_env *env, t_index *index)
{
	if (env->user.y > env->oppon.y)
		ft_first(env, index);
	else
		ft_second(env, index);
	return (0);
}
