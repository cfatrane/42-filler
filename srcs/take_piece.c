/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_piece.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 14:23:50 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/15 16:11:24 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	take_piece(t_filler *env, char *line)
{
	int	i;
	int	j;

	j = 6;
	env->y_token = ft_atoi(&line[6]);
	while (ft_isdigit(line[j]))
		j++;
	j++;
	env->x_token = ft_atoi(&line[j]);
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
