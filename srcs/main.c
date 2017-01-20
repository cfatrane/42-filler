/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 17:30:18 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/20 15:12:53 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	main(void)
{
	t_env env;

	ft_bzero(&env, sizeof(t_env));
//	ft_check();
	ft_info(&env);
	ft_take_map(&env);
	ft_take_piece(&env);
	ft_push_piece(&env);
	ft_bzero(&env, sizeof(t_env));
	return (0);
}
