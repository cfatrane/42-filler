/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_piece.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 15:06:34 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/20 16:21:18 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_search_piece(t_env *env)
{
	(void)env;
//	int i = 0;
/*	while (env->map.map[i])
	{
		ft_putendl_fd(env->map.map[i], 2);
		i++;
	}*/
//	char	*ret;
//	int		i = 0;
//	char	*line;

//	ft_putstr_fd((ft_strchr(env->map.map[7], 'O')), 2);

/*	
	while (ft_strchr(env->map.map[i], env->user.letter) == NULL)
	{
		ret = ft_strchr(env->map.map[i], 'O');
		i++;
	}
		ret = ft_strchr(env->map.map[i], 'O');
	ft_putstr_fd("I VAUT = ", 2);
	ft_putnbr_fd(i, 2);
	ft_putstr_fd("LIGNE = ", 2);
	ft_putstr_fd(ret, 2);
	ft_putstr_fd("||", 2);*/
	return (0);
}

int	ft_push_piece(t_env *env)
{
	ft_search_piece(env);
	return (0);
}
