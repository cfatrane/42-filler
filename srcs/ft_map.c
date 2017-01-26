/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 10:39:23 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/26 12:29:48 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

char		**ft_init_map(t_env *env)
{
	char	**board;
	int		i;
	int		j;

	i = 0;
	board = (char**)malloc((env->map.y + 1) * sizeof(char*));
	while (i < env->map.y)
	{
		board[i] = (char*)malloc((env->map.x + 1) * sizeof(char));
		i++;
	}
	board[i] = NULL;
	i = 0;
	j = 0;
	while (i < env->map.y)
	{
		while (j < env->map.x)
		{
			board[i][j] = '.';
			j++;
		}
		board[i][j] = '\0';
		i++;
	}
	return (board);
}

static void	ft_take_map(t_env *env, char *line)
{
	int		i;
	int		j;

	i = 0;
	while (i < env->map.y)
	{
		j = 0;
		while (line[j + 4])
		{
			env->map.map[i][j] = line[j + 4];
			j++;
		}
		if (i != env->map.y - 1)
		{
			free_line(line);
			get_next_line(0, &line);
		}
		i++;
	}
	free_line(line);
}

void		ft_map(t_env *env)
{
	char	*line;

	if (env->map.map != NULL)
	{
		get_next_line(0, &line);
		free(line);
	}
	else
		ft_info_map(env);
	get_next_line(0, &line);
	free_line(line);
	get_next_line(0, &line);
	ft_take_map(env, line);
}
