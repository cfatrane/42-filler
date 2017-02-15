/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 15:01:34 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/15 16:32:25 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

static int	algo_down_left(t_filler *env)
{
	int	i;
	int	j;

	i = env->y_map;
	while (i > 0)
	{
		j = 0;
		while (j < env->x_map)
		{
			if (try_token(env, i, j) == 1)
			{
				env->push_x = j;
				env->push_y = i;
				return (1);
			}
			j++;
		}
		i--;
	}
	return (0);
}

static int	algo_up_right(t_filler *env)
{
	int	i;
	int	j;

	i = 0;
	while (i < env->y_map)
	{
		j = env->x_map;
		while (j > 0)
		{
			if (try_token(env, i, j) == 1)
			{
				env->push_x = j;
				env->push_y = i;
				return (1);
			}
			j--;
		}
		i++;
	}
	return (0);
}

static int	algo_down_right(t_filler *env)
{
	int	i;
	int	j;

	i = env->y_map;
	while (i > 0)
	{
		j = env->x_map;
		while (j > 0)
		{
			if (try_token(env, i, j) == 1)
			{
				env->push_x = j;
				env->push_y = i;
				return (1);
			}
			j--;
		}
		i--;
	}
	return (0);
}

static int	algo_up_left(t_filler *env)
{
	int	i;
	int	j;

	i = 0;
	while (i < env->y_map)
	{
		j = 0;
		while (j < env->x_map)
		{
			if (try_token(env, i, j) == 1)
			{
				env->push_x = j;
				env->push_y = i;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int			algo(t_filler *env)
{
	if (env->algo == 0)
		return (algo_up_left(env));
	else if (env->algo == 1)
		return (algo_down_right(env));
	else if (env->algo == 2)
		return (algo_up_right(env));
	else if (env->algo == 3)
		return (algo_down_left(env));
	else
		return (0);
}
