/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 18:29:36 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/08 20:27:25 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/filler.h"

int	main(void)
{
	t_filler *env;

	if (!(env = ft_memalloc(sizeof(t_filler))))
		return (-1);
	ft_info(env);
/*	ft_putstr_fd("\033[34mUSER = \033[0m",2);
	ft_putchar_fd(env->user, 2);
	ft_putchar_fd('\n', 2);
	ft_putstr_fd("\033[34mOPPON = \033[0m",2);
	ft_putchar_fd(env->oppon, 2);
	ft_putchar_fd('\n', 2);
*/	while (69)
	{
		ft_filler(env);
	}
	return (0);
}
