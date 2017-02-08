/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 10:36:49 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/08 19:53:24 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "../libft/libft.h"
# include "../ft_printf/includes/ft_printf.h"
# include "filler_struct.h"

int	ft_filler(t_filler *env);
int	ft_info(t_filler *env);
int	ft_info_map(t_filler *env);
int	ft_info_user(t_filler *env);
int	ft_take_map(t_filler *env);
int	ft_push_piece(t_filler *env);
int	ft_take_piece(t_filler *env);
int	ft_search_piece(t_filler *env);

#endif
