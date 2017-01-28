/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 11:18:56 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/28 20:25:05 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void	ft_push(t_filler *filler)
{
	ft_putnbr(filler->token_user.y);
	ft_putchar(' ');
	ft_putnbr(filler->token_user.x);
	ft_putchar('\n');
}
