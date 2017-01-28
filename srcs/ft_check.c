/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 11:38:33 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/28 20:19:32 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

static int	ft_fillin(t_filler filler, int *count, int y, int x)
{
	if (y >= filler.map.y || x >= filler.map.x
	|| filler.map.map[y][x] == filler.oppon
	|| filler.map.map[y][x] == filler.oppon + 32)
		return (0);
	if (filler.map.map[y][x] == filler.user
	|| filler.map.map[y][x] == filler.user + 32)
		(*count)++;
	return (1);
}

static int	ft_out(t_filler filler, int y, int x)
{
	int	i;
	int	j;

	i = 0;
	while (i < filler.token.y)
	{
		j = 0;
		while (j < filler.token.x)
		{
			if (filler.token.map[i][j] == '*' && ((x + j < 0) || (y + i < 0)))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int			ft_pose(t_filler filler, int y, int x)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	if (!ft_out(filler, y, x))
		return (0);
	while (i < filler.token.y)
	{
		j = 0;
		while (j < filler.token.x)
		{
			if (filler.token.map[i][j] == '*' && (y + i >= 0) && (x + j >= 0))
				if (!ft_fillin(filler, &count, y + i, x + j))
					return (0);
			j++;
		}
		i++;
	}
	return (count == 1) ? 1 : 0;
}
