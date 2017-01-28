/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler_struct.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 10:27:50 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/26 13:18:52 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_STRUCT_H
# define FILLER_STRUCT_H

typedef struct		s_coord
{
	int				y;
	int				x;
	int				diff;
	int				strat;
}					t_coord;

typedef struct		s_token
{
	int				y;
	int				x;
	char			**map;
}					t_token;

typedef struct		s_map
{
	int				y;
	int				x;
	char			**map;
}					t_map;

typedef struct		s_env
{
	int				ok;
	char			user;
	char			oppon;
	t_map			map;
	t_token			token;
	t_coord			last_oppon;
	t_coord			token_user;
}					t_env;

#endif
