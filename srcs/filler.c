/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 11:34:32 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/10 11:36:58 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	filler(t_filler *env)
{
//	info_map(env);
	take_map(env);
	take_piece(env);
//	search_piece(env);
//	push_piece(env);
	return (0);
}
