/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_token.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 16:23:29 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/15 16:24:17 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	push_piece(t_filler *env)
{
	if (env->algo == 0)
		env->algo = 3;
	else if (env->algo == 1)
		env->algo = 2;
	else if (env->algo == 2)
		env->algo = 1;
	else if (env->algo == 3)
		env->algo = 0;
	if (env->ok == -1)
	{
		env->gameover = 1;
		ft_putnbr(env->push_y);
		ft_putchar(' ');
		ft_putnbr(env->push_x);
		ft_putchar('\n');
	}
	else
	{
		ft_putnbr(env->push_y);
		ft_putchar(' ');
		ft_putnbr(env->push_x);
		ft_putchar('\n');
	}
	return (0);
}
