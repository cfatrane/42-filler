/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 10:36:49 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/27 14:39:11 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "../libft/libft.h"
# include "filler_struct.h"

void	info_map(t_filler *env);
void	info_user(t_filler *env);

int		take_map(t_filler *env);
int		take_token(t_filler *env, char *line);

int		algo(t_filler *env);

void	position(t_filler *env);

int		try_token(t_filler *env, int i, int j);

void	push_token(t_filler *env);

#endif
