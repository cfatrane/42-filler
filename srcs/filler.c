/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 11:34:32 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/15 16:24:18 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	filler(t_filler *env)
{
	info_map(env);
	take_map(env);
	if (algo(env) == 0)
		env->ok = -1;
	push_piece(env);
	if (env->gameover == 1)
	{
		free(env->map);
		free(env->token);
		free(env);
		env->fin = 1;
	}
	return (0);
}
