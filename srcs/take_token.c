/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_token.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 14:24:50 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/28 10:16:51 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	take_token(t_filler *env, char *line)
{
	int		n;
	int		i;

	n = 6;
	i = 0;
	env->y_token = ft_atoi(&line[6]);
	while (ft_isdigit(line[n]))
		n++;
	n++;
	env->x_token = ft_atoi(&line[n]);
	if (!env->token)
		if (!(env->token = ft_strnew_two(env->y_token, env->x_token)))
			return (-1);
	while (i < env->y_token)
	{
		get_next_line(0, &line);
		env->token[i] = ft_strdup(line);
		i++;
	}
	return (0);
}
