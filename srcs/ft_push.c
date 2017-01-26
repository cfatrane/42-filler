/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 11:18:56 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/26 11:19:28 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void	ft_push(t_coos curr_play)
{
	ft_putnbr(curr_play.y);
	ft_putchar(' ');
	ft_putnbr(curr_play.x);
	ft_putchar('\n');
}
