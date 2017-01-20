/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_piece.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:02:50 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/20 14:56:13 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_take_piece(t_env *env)
{
	char	*line;

	get_next_line(0, &line);
	while (!ft_isdigit(*line))
		line++;
	env->piece.y = ft_atoi(line);
	while (ft_isdigit(*line + 1))
		line++;
	env->piece.x = ft_atoi(line);
	return (0);
}
