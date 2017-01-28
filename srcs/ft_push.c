/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 11:18:56 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/28 20:01:44 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void	ft_push(t_env *env)
{
	printf("\033[34m%d %d\n\033[0m", env->token_user.y, env->token_user.x);
	ft_putnbr(env->token_user.y);
	ft_putchar(' ');
	ft_putnbr(env->token_user.x);
	ft_putchar('\n');
}
