/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_piece.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 19:29:04 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/08 19:55:50 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/filler.h"

int	ft_push_piece(t_filler *env)
{
	ft_putnbr_fd(env->push_x ,1);
	ft_putchar_fd(' ' ,1);
	ft_putnbr_fd(env->push_y ,1);
	ft_putchar_fd('\n' ,1);
	return (0);
}
