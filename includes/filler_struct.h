/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler_struct.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 09:49:57 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/20 14:50:30 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_STRUCT_H
# define FILLER_STRUCT_H

typedef struct		s_piece
{
	int				x;
	int				y;
	char			**map;
}					t_piece;

typedef struct		s_oppon
{
	char			letter;
}					t_oppon;

typedef struct		s_user
{
	char			letter;
}					t_user;

typedef struct		s_map
{
	int				x;
	int				y;
	char			**map;
}					t_map;

typedef struct		s_env
{
	struct s_map	map;
	struct s_piece	piece;
	struct s_user	user;
	struct s_oppon	oppon;
}					t_env;

#endif
