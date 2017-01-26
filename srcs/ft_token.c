/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_token.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 11:00:03 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/26 12:35:27 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void	ft_token(t_env *env)
{
	char	*line;
	int		i;

	i = 6;
	get_next_line(0, &line);
	env->token.y = ft_atoi(&(line[i]));
	while (line[i] >= '0' && line[i] <= '9')
		i++;
	i++;
	env->token.x = ft_atoi(&(line[i]));
	env->token.map = (char**)malloc(sizeof(char*)
	* (env->token.y + 1));
	i = 0;
	free(line);
	while (i < env->token.y)
	{
		get_next_line(0, &(env->token.map[i]));
		i++;
	}
	env->token.map[i] = NULL;
}
