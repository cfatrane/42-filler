/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 18:44:19 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/23 19:33:43 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_first(t_env *env)
{
	int	i;
	int	j;

	i = env->map.y;
	while (i--)
	{
		j = env->map.x;
		while (j--)
		{
			if (ft_check(env))
			{
				env->piece.push_x = j;
				env->piece.push_y = i;
			}
		}
	}
	return (0);
}

int	ft_second(t_env *env)
{
	int	i;
	int	j;

	i = 0;
	while (env->map.y--)
	{
		j = 0;
		while (env->map.x--)
		{
			if (ft_check(env))
			{
				env->piece.push_x = j;
				env->piece.push_y = i;
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_place(t_env *env)
{
	if (env->user.y > env->oppon.y)
		ft_first(env);
	else
		ft_second(env);
	return (0);
}
