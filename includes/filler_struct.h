/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler_struct.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 09:49:57 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/22 15:10:04 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_STRUCT_H
# define FILLER_STRUCT_H

typedef struct		s_oppon
{
	char			letter;
	char			last;
}					t_oppon;

typedef struct		s_user
{
	char			letter;
	char			last;
}					t_user;

typedef struct		s_map
{
	int				x;
	int				y;
	char			**map;
}					t_map;

typedef struct		s_piece
{
	int				x;
	int				y;
	char			**map;
	int				push_x;
	int				push_y;
	int				min_y;
	int				min_x;
	int				max_y;
	int				max_x;
}					t_piece;

typedef struct		s_env
{
	char			*line;
	int				tour;
	int				info;
	struct s_map	map;
	struct s_piece	piece;
	struct s_user	user;
	struct s_oppon	oppon;
}					t_env;

#endif
