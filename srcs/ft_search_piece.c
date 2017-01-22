/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_piece.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 16:01:57 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/22 17:04:02 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_search_piece(t_env *env)
{
	int		i = 0;
	int		j = 0;

	while (ft_strchr(env->map.map[i], env->user.letter) == NULL)
		ft_strchr(env->map.map[i++], env->user.letter);
	while (env->map.map[i][j] != env->user.letter)
		j++;
	env->piece.push_x = i - env->piece.min_x;
	env->piece.push_y = j - env->piece.min_y;
	ft_putstr_fd("PLACER A X VAUT = |", 2);
	ft_putnbr_fd(env->piece.push_x, 2);
	ft_putendl_fd("|", 2);
	ft_putstr_fd("PLACER A Y VAUT = |", 2);
	ft_putnbr_fd(env->piece.push_y, 2);
	ft_putendl_fd("|", 2);
	ft_push_piece(env);
	return (0);
}
