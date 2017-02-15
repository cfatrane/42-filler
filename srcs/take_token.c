/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_token.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 16:22:45 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/15 16:22:48 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	take_piece(t_filler *env, char *line)
{
	int	i;

	while (!ft_isdigit(*line))
		line++;
	env->y_token = ft_atoi(line);
	while (ft_isdigit(*line + 1))
		line++;
	env->x_token = ft_atoi(line);
	i = 0;
	if (!(env->token))
		if (!(env->token = ft_memalloc(sizeof(char *) * env->y_token)))
			return (-1);
	while (i < env->y_token)
	{
		get_next_line(0, &line);
		env->token[i] = ft_strdup(line);
		i++;
	}
	return (0);
}
