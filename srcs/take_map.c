/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 14:23:56 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/15 16:13:32 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	take_map(t_filler *env)
{
	int		i;
	char	*line;

	i = 0;
	if (!(env->map))
		if (!(env->map = ft_memalloc(sizeof(char *) * env->y_map)))
			return (-1);
	get_next_line(0, &line);
	while (i <= env->y_map)
	{
		get_next_line(0, &line);
		if (ft_isdigit(line[0]))
			env->map[i] = ft_strdup(line + 4);
		else
			take_piece(env, line);
		i++;
	}
	return (0);
}
