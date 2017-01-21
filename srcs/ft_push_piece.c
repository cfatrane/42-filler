/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_piece.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 15:06:34 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/21 16:08:13 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_push_piece(t_env *env)
{
	ft_putnbr_fd(env->piece.push_x ,1);
	ft_putchar_fd(' ' ,1);
	ft_putnbr_fd(env->piece.push_y ,1);
	ft_putchar_fd('\n' ,1);
	return (0);
}
