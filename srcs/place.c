/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 19:35:58 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/10 11:37:33 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_first(t_filler *env)
{
	(void)env;
/*	int	i;
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
*/	return (0);
}

int	ft_second(t_filler *env)
{
	(void)env;
/*	int	i;
	int	j;

	i = 0;
	while (env->map.y--)
	{
		j = 0;
		while (env->map	.x--)
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
*/	return (0);
}

int	place(t_filler *env)
{
	(void)env;
/*	if (env->user.y > env->oppon.y)
		ft_first(env);
	else
		ft_second(env);
*/	return (0);
}
