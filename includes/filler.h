/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 09:49:42 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/24 13:32:49 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "../libft/libft.h"
# include "filler_struct.h"

# define STAR '*'
# define POINT '.'

int	ft_filler(t_env *env, t_index *index);

int	ft_info(t_env *env);
int	ft_info_map(t_env*fdf);

int	ft_take_map(t_env *env, t_index *index);
int	ft_take_piece(t_env *env, t_index *index);

int	ft_push_piece(t_env *env);
int	ft_search_piece(t_env *env, t_index *index);
int	ft_place(t_env *env, t_index *index);
int	ft_check(t_env *env);

#endif
