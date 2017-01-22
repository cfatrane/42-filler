/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 09:49:42 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/22 14:33:30 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "../libft/libft.h"
# include "filler_struct.h"

# define STAR '*'

int	ft_info(t_env *env);
int	ft_take_map(t_env *env);
int	ft_take_piece(t_env *env);
int	ft_push_piece(t_env *env);
int	ft_search_piece(t_env *env);

#endif
