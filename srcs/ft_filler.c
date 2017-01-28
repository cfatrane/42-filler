/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 11:48:15 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/26 13:24:33 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

static void	ft_algo(t_env *env, int *i, int *j)
{
	*i = (env->token.y) * (-1);
	*j = (env->token.x) * (-1);
	env->token_user.x = *j;
	env->token_user.y = *i;
	env->token_user.strat = 0;
}

static void	ft_diff(t_env *env, int i, int j)
{
	if (ft_pose(*env, i, j))
	{
		if (((ft_abs(i - env->last_oppon.y)
		+ ft_abs(j - env->last_oppon.x))) < env->token_user.diff)
		{
			env->token_user.diff = (ft_abs(i - env->last_oppon.y)
			+ ft_abs(j - env->last_oppon.x));
			env->token_user.x = j;
			env->token_user.y = i;
			env->token_user.strat = 1;
		}
	}
}

static void	ft_last(t_env *env)
{
	int			i;
	int			j;
	static int	b = 0;

	i = 0;
	while (i < env->map.y)
	{
		j = 0;
		while (j < env->map.x)
		{
			if (env->map.map[i][j] == env->oppon
			|| (b == 0 && env->map.map[i][j] == env->oppon + 32))
			{
				b = 1;
				env->last_oppon.x = j;
				env->last_oppon.y = i;
				return ;
			}
			j++;
		}
		i++;
	}
}

int			ft_filler(t_env *env)
{
	int		i;
	int		j;

	ft_algo(env, &i, &j);
	env->token_user.diff = env->map.y + env->map.x;
	ft_last(env);
	while (i < env->map.x)
	{
		j = (env->token.x) * (-1);
		while (j < env->map.x)
		{
			ft_diff(env, i, j);
			j++;
		}
		i++;
	}
	ft_push(env);
	return (env->token_user.strat);
}
