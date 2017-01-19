/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler_struct.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 09:49:57 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/19 19:38:48 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_STRUCT_H
# define FILLER_STRUCT_H

typedef struct		s_piece
{
	int				x;
	int				y;
}					t_piece;

typedef struct		s_env
{
	int				x;
	int				y;
	char			letter;
	struct s_piece	piece;
}					t_env;

#endif
