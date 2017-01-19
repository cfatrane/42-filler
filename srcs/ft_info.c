/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 17:20:20 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/19 19:53:15 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_info(t_env *env)
{
	char	*line;

	get_next_line(0, &line);
	env->letter = (*line + 10 == '1' ? 'O' : 'X');
	get_next_line(0, &line);
	while (!ft_isdigit(*line))
		line++;
	env->y = ft_atoi(line);
	while (ft_isdigit(*line + 1))
		line++;
	env->x = ft_atoi(line);
	ft_putchar_fd(env->letter, 2);
	return (0);
}
