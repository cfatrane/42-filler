/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler_struct.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 11:18:42 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/08 20:14:30 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_STRUCT_H
# define FILLER_STRUCT_H

#include "filler.h"

typedef struct	s_filler
{
	char		user;
	char		oppon;
	size_t		x_map;
	size_t		y_map;
	char		**map;
	size_t		x_token;
	size_t		y_token;
	char		**token;
	char		*line;
	ssize_t		push_x;
	ssize_t		push_y;
}				t_filler;

#endif
