/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 11:38:33 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/26 13:12:57 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

static int	ft_fillin(t_env env, int *count, int y, int x)
{
	if (y >= env.map.y || x >= env.map.x
	|| env.map.map[y][x] == env.oppon
	|| env.map.map[y][x] == env.oppon + 32)
		return (0);
	if (env.map.map[y][x] == env.user
	|| env.map.map[y][x] == env.user + 32)
		(*count)++;
	return (1);
}

static int	ft_out(t_env env, int y, int x)
{
	int	i;
	int	j;

	i = 0;
	while (i < env.token.y)
	{
		j = 0;
		while (j < env.token.x)
		{
			if (env.token.map[i][j] == '*' && ((x + j < 0) || (y + i < 0)))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int			ft_pose(t_env env, int y, int x)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	if (!ft_out(env, y, x))
		return (0);
	while (i < env.token.y)
	{
		j = 0;
		while (j < env.token.x)
		{
			if (env.token.map[i][j] == '*' && (y + i >= 0) && (x + j >= 0))
				if (!ft_fillin(env, &count, y + i, x + j))
					return (0);
			j++;
		}
		i++;
	}
	return (count == 1) ? 1 : 0;
}
