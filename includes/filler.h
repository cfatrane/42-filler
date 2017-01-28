/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 11:16:36 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/28 20:18:57 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "../libft/libft.h"
# include "../ft_printf/includes/ft_printf.h"
# include "filler_struct.h"

void	ft_info_user(t_filler *filler);
void	ft_info_map(t_filler *filler);

void	ft_map(t_filler *filler);
char	**ft_init_map(t_filler *filler);

void	ft_token(t_filler *filler);
int		ft_pose(t_filler filler, int y, int x);

int		ft_filler(t_filler *filler);
void	ft_push(t_filler *filler);

void	free_tab(char **tab);
void	free_line(char *line);

#endif
