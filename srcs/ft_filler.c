/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 11:48:15 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/28 20:19:08 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

static void	ft_algo(t_filler *filler, int *i, int *j)
{
	*i = (filler->token.y) * (-1);
	*j = (filler->token.x) * (-1);
	filler->token_user.x = *j;
	filler->token_user.y = *i;
	filler->token_user.strat = 0;
}

static void	ft_diff(t_filler *filler, int i, int j)
{
	if (ft_pose(*filler, i, j))
	{
		if (((ft_abs(i - filler->last_oppon.y)
		+ ft_abs(j - filler->last_oppon.x))) < filler->token_user.diff)
		{
			filler->token_user.diff = (ft_abs(i - filler->last_oppon.y)
			+ ft_abs(j - filler->last_oppon.x));
			filler->token_user.x = j;
			filler->token_user.y = i;
			filler->token_user.strat = 1;
		}
	}
}

static void	ft_last(t_filler *filler)
{
	int			i;
	int			j;
	static int	b = 0;

	i = 0;
	while (i < filler->map.y)
	{
		j = 0;
		while (j < filler->map.x)
		{
			if (filler->map.map[i][j] == filler->oppon
			|| (b == 0 && filler->map.map[i][j] == filler->oppon + 32))
			{
				b = 1;
				filler->last_oppon.x = j;
				filler->last_oppon.y = i;
				return ;
			}
			j++;
		}
		i++;
	}
}

int			ft_filler(t_filler *filler)
{
	int		i;
	int		j;

	ft_algo(filler, &i, &j);
	filler->token_user.diff = filler->map.y + filler->map.x;
	ft_last(filler);
	while (i < filler->map.x)
	{
		j = (filler->token.x) * (-1);
		while (j < filler->map.x)
		{
			ft_diff(filler, i, j);
			j++;
		}
		i++;
	}
	ft_push(filler);
	return (filler->token_user.strat);
}
