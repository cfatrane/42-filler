/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 18:29:36 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/10 11:36:59 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/filler.h"

int	main(void)
{
	t_filler *env;

	if (!(env = ft_memalloc(sizeof(t_filler))))
		return (-1);
	info(env);
/*	ft_putstr_fd("\033[34mUSER = \033[0m",2);
	ft_putchar_fd(env->user, 2);
	ft_putchar_fd('\n', 2);
	ft_putstr_fd("\033[34mOPPON = \033[0m",2);
	ft_putchar_fd(env->oppon, 2);
	ft_putchar_fd('\n', 2);
*/	
	
/*	ft_putstr_fd("\033[34mY VAUT = \033[0m",2);
	ft_putnbr_fd(env->y_map, 2);
	ft_putchar_fd('\n', 2);
	ft_putstr_fd("\033[34mX VAUT = \033[0m",2);
	ft_putnbr_fd(env->x_map, 2);
	ft_putchar_fd('\n', 2);*/
//	int i = 0;
/*	while (env->map[i])
	{
		ft_putstr_fd("COPIE ", 2);
		ft_putnbr_fd(i, 2);
		ft_putstr_fd(" = |", 2);
		ft_putstr_fd(env->map[i] + 4, 2);
		ft_putendl_fd("|", 2);
		i++;
	}*/
	while (69)
	{
		filler(env);
	}
	return (0);
}
