/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 14:55:59 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/15 16:09:28 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	position(t_filler *env)
{
	int i;
	int j;

	i = 0;
	while (i < env->y_map)
	{
		j = 0;
		while (j < env->x_map)
		{
			if (env->map[i][j] == env->oppon)
			{
				env->o_pos_x = j;
				env->o_pos_y = i;
			}
			if (env->map[i][j] == env->user)
			{
				env->u_pos_x = j;
				env->u_pos_y = i;
			}
			j++;
		}
		i++;
	}
	env->algo = (env->o_pos_y > env->u_pos_y) ? 1 : 0;
	return (0);
}
