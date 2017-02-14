/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 10:36:49 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/10 11:35:17 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "../libft/libft.h"
# include "../ft_printf/includes/ft_printf.h"
# include "filler_struct.h"

int	filler(t_filler *env);
int	info(t_filler *env);
int	info_map(t_filler *env);
int	info_user(t_filler *env);

int	take_map(t_filler *env);
int	take_piece(t_filler *env);

int	push_piece(t_filler *env);
int	search_piece(t_filler *env);

#endif
