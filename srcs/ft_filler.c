/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 18:23:22 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/24 11:11:11 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_filler(t_env *env, t_index *index)
{
	ft_info_map(env);
	ft_take_map(env);
	ft_take_piece(env);
	ft_search_piece(env);
	ft_push_piece(env);
	return (0);
}