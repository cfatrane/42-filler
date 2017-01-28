/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 11:16:36 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/26 13:19:04 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "../libft/libft.h"
# include "filler_struct.h"

void	ft_info_user(t_env *env);
void	ft_info_map(t_env *env);

void	ft_map(t_env *env);
char	**ft_init_map(t_env *env);

void	ft_token(t_env *env);
int		ft_pose(t_env env, int y, int x);

int		ft_filler(t_env *env);
void	ft_push(t_env *env);

void	free_tab(char **tab);
void	free_line(char *line);

#endif
