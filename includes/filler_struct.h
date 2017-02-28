/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler_struct.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 11:18:42 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/27 14:20:19 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_STRUCT_H
# define FILLER_STRUCT_H

# include "filler.h"

typedef struct	s_filler
{
	char	user;
	char	oppon;
	int		x_map;
	int		y_map;
	char	**map;
	int		x_token;
	int		y_token;
	char	**token;
	int		u_pos_x;
	int		u_pos_y;
	int		o_pos_x;
	int		o_pos_y;
	int		push_x;
	int		push_y;
	int		algo;
	int		ko;
	int		gameover;
}				t_filler;

#endif
