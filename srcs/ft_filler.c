/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 19:25:54 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/08 19:53:29 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_filler(t_filler *env)
{
//	ft_info_map(env);
	ft_take_map(env);
	ft_take_piece(env);
	ft_search_piece(env);
	ft_push_piece(env);
	return (0);
}
